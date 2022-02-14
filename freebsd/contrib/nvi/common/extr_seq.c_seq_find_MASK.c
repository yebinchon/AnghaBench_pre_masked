
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ seq_t ;
struct TYPE_17__ {scalar_t__ e_c; } ;
struct TYPE_16__ {TYPE_1__* gp; } ;
struct TYPE_15__ {scalar_t__* input; scalar_t__ stype; size_t ilen; } ;
struct TYPE_14__ {int seqq; } ;
typedef TYPE_2__ SEQ ;
typedef TYPE_3__ SCR ;
typedef TYPE_4__ EVENT ;
typedef scalar_t__ CHAR_T ;


 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,int ) ;
 int FUNC_2 (size_t,size_t) ;
 int VAR_0 ;
 TYPE_2__* FUNC_3 (int ) ;
 TYPE_2__* FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (scalar_t__*,TYPE_4__*,int ) ;
 int VAR_1 ;

SEQ *
FUNC_6(
 SCR *VAR_2,
 SEQ **VAR_3,
 EVENT *VAR_4,
 CHAR_T *VAR_5,
 size_t VAR_6,
 seq_t VAR_7,
 int *VAR_8)
{
 SEQ *VAR_9 = ((void*)0), *VAR_10;
 int VAR_11;
 if (VAR_8 != ((void*)0))
  *VAR_8 = 0;
 for (VAR_10 = FUNC_3(VAR_2->gp->seqq); VAR_10 != ((void*)0);
     VAR_9 = VAR_10, VAR_10 = FUNC_4(VAR_10, VAR_1)) {




  if (VAR_4 == ((void*)0)) {
   if (VAR_10->input[0] > VAR_5[0])
    break;
   if (VAR_10->input[0] < VAR_5[0] ||
       VAR_10->stype != VAR_7 || FUNC_0(VAR_10, VAR_0))
    continue;
   VAR_11 = FUNC_1(VAR_10->input, VAR_5, FUNC_2(VAR_10->ilen, VAR_6));
  } else {
   if (VAR_10->input[0] > VAR_4->e_c)
    break;
   if (VAR_10->input[0] < VAR_4->e_c ||
       VAR_10->stype != VAR_7 || FUNC_0(VAR_10, VAR_0))
    continue;
   VAR_11 =
       FUNC_5(VAR_10->input, VAR_4, FUNC_2(VAR_10->ilen, VAR_6));
  }
  if (VAR_11 > 0)
   break;
  if (VAR_11 < 0)
   continue;






  if (VAR_10->ilen <= VAR_6) {
   if (VAR_10->ilen == VAR_6 || VAR_8 != ((void*)0)) {
    if (VAR_3 != ((void*)0))
     *VAR_3 = VAR_9;
    return (VAR_10);
   }
   continue;
  }





  if (VAR_8 != ((void*)0))
   *VAR_8 = 1;
  break;
 }
 if (VAR_3 != ((void*)0))
  *VAR_3 = VAR_9;
 return (((void*)0));
}
