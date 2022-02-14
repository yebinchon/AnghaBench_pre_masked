
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef unsigned int uchar ;
struct TYPE_15__ {unsigned int* text; int len; } ;
struct TYPE_16__ {TYPE_1__ str; } ;
struct TYPE_18__ {TYPE_2__ val; } ;
typedef TYPE_4__ cpp_token ;
struct TYPE_17__ {scalar_t__ in_directive; } ;
struct TYPE_19__ {TYPE_3__ state; } ;
typedef TYPE_5__ cpp_reader ;
typedef size_t cpp_num_part ;
struct TYPE_20__ {unsigned int low; int unsignedp; int overflow; scalar_t__ high; } ;
typedef TYPE_6__ cpp_num ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 size_t FUNC_0 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 size_t VAR_7 ;
 TYPE_6__ FUNC_3 (TYPE_6__,unsigned int,unsigned int,size_t) ;
 int FUNC_4 (TYPE_5__*,int ,char*) ;
 unsigned int FUNC_5 (unsigned int) ;
 int FUNC_6 (TYPE_6__,size_t) ;
 size_t VAR_8 ;
 int VAR_9 ;

cpp_num
FUNC_7 (cpp_reader *VAR_10, const cpp_token *VAR_11,
         unsigned int VAR_12)
{
  const uchar *VAR_13, *VAR_14;
  cpp_num VAR_15;

  VAR_15.low = 0;
  VAR_15.high = 0;
  VAR_15.unsignedp = !!(VAR_12 & VAR_6);
  VAR_15.overflow = 0;

  VAR_13 = VAR_11->val.str.text;
  VAR_14 = VAR_13 + VAR_11->val.str.len;


  if (VAR_11->val.str.len == 1)
    VAR_15.low = VAR_13[0] - '0';
  else
    {
      cpp_num_part VAR_16;
      size_t VAR_17 = FUNC_0 (VAR_10, VAR_17);
      unsigned int VAR_18 = 10, VAR_19 = 0;
      bool VAR_20 = 0;

      if ((VAR_12 & VAR_5) == VAR_4)
 {
   VAR_18 = 8;
   VAR_13++;
 }
      else if ((VAR_12 & VAR_5) == VAR_3)
 {
   VAR_18 = 16;
   VAR_13 += 2;
 }
      else if ((VAR_12 & VAR_5) == VAR_2)
 {
   VAR_18 = 2;
   VAR_13 += 2;
 }



      VAR_16 = ~(cpp_num_part) 0;
      if (VAR_17 < VAR_7)
 VAR_16 >>= VAR_7 - VAR_17;
      VAR_16 = (VAR_16 - VAR_18 + 1) / VAR_18 + 1;

      for (; VAR_13 < VAR_14; VAR_13++)
 {
   VAR_19 = *VAR_13;

   if (FUNC_1 (VAR_19) || (VAR_18 == 16 && FUNC_2 (VAR_19)))
     VAR_19 = FUNC_5 (VAR_19);
   else
     break;


   if (VAR_15.low < VAR_16)
     VAR_15.low = VAR_15.low * VAR_18 + VAR_19;
   else
     {
       VAR_15 = FUNC_3 (VAR_15, VAR_19, VAR_18, VAR_17);
       VAR_20 |= VAR_15.overflow;
       VAR_16 = 0;
     }
 }

      if (VAR_20)
 FUNC_4 (VAR_10, VAR_0,
     "integer constant is too large for its type");




      else if (!VAR_15.unsignedp
        && !(FUNC_0 (VAR_10, VAR_9)
      && VAR_10->state.in_directive)
        && !FUNC_6 (VAR_15, VAR_17))
 {
   if (VAR_18 == 10)
     FUNC_4 (VAR_10, VAR_1,
         "integer constant is so large that it is unsigned");
   VAR_15.unsignedp = 1;
 }
    }

  return VAR_15;
}
