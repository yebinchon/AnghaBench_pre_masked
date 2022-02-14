
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t cppchar_t ;
struct TYPE_3__ {int len; size_t* text; } ;
typedef TYPE_1__ cpp_string ;
typedef int cpp_reader ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t FUNC_2 (size_t) ;

__attribute__((used)) static cppchar_t
FUNC_3 (cpp_reader *VAR_6, cpp_string VAR_7,
    unsigned int *VAR_8, int *VAR_9)
{
  size_t VAR_10 = FUNC_0 (VAR_6, VAR_2);
  size_t VAR_11 = FUNC_0 (VAR_6, VAR_3) / VAR_10;
  size_t VAR_12 = FUNC_2 (VAR_10);
  size_t VAR_13;
  cppchar_t VAR_14, VAR_15;
  bool VAR_16;
  VAR_14 = 0;
  for (VAR_13 = 0; VAR_13 < VAR_7.len - 1; VAR_13++)
    {
      VAR_15 = VAR_7.text[VAR_13] & VAR_12;
      if (VAR_10 < VAR_0)
 VAR_14 = (VAR_14 << VAR_10) | VAR_15;
      else
 VAR_14 = VAR_15;
    }

  if (VAR_13 > VAR_11)
    {
      VAR_13 = VAR_11;
      FUNC_1 (VAR_6, VAR_1,
   "character constant too long for its type");
    }
  else if (VAR_13 > 1 && FUNC_0 (VAR_6, VAR_5))
    FUNC_1 (VAR_6, VAR_1, "multi-character character constant");


  if (VAR_13 > 1)
    VAR_16 = 0;
  else
    VAR_16 = FUNC_0 (VAR_6, VAR_4);





  if (VAR_13 > 1)
    VAR_10 = FUNC_0 (VAR_6, VAR_3);
  if (VAR_10 < VAR_0)
    {
      VAR_12 = ((cppchar_t) 1 << VAR_10) - 1;
      if (VAR_16 || !(VAR_14 & (1 << (VAR_10 - 1))))
 VAR_14 &= VAR_12;
      else
 VAR_14 |= ~VAR_12;
    }
  *VAR_8 = VAR_13;
  *VAR_9 = VAR_16;
  return VAR_14;
}
