
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t cppchar_t ;
struct TYPE_3__ {size_t len; size_t* text; } ;
typedef TYPE_1__ cpp_string ;
typedef int cpp_reader ;


 size_t VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 size_t FUNC_2 (size_t) ;

__attribute__((used)) static cppchar_t
FUNC_3 (cpp_reader *VAR_6, cpp_string VAR_7,
         unsigned int *VAR_8, int *VAR_9)
{
  bool VAR_10 = FUNC_0 (VAR_6, VAR_2);
  size_t VAR_11 = FUNC_0 (VAR_6, VAR_5);
  size_t VAR_12 = FUNC_0 (VAR_6, VAR_3);
  size_t VAR_13 = FUNC_2 (VAR_11);
  size_t VAR_14 = FUNC_2 (VAR_12);
  size_t VAR_15 = VAR_11 / VAR_12;
  size_t VAR_16, VAR_17;
  cppchar_t VAR_18 = 0, VAR_19;




  VAR_16 = VAR_7.len - (VAR_15 * 2);
  VAR_18 = 0;
  for (VAR_17 = 0; VAR_17 < VAR_15; VAR_17++)
    {
      VAR_19 = VAR_10 ? VAR_7.text[VAR_16 + VAR_17] : VAR_7.text[VAR_16 + VAR_15 - VAR_17 - 1];
      VAR_18 = (VAR_18 << VAR_12) | (VAR_19 & VAR_14);
    }




  if (VAR_16 > 0)
    FUNC_1 (VAR_6, VAR_1,
        "character constant too long for its type");



  if (VAR_11 < VAR_0)
    {
      if (FUNC_0 (VAR_6, VAR_4) || !(VAR_18 & (1 << (VAR_11 - 1))))
 VAR_18 &= VAR_13;
      else
 VAR_18 |= ~VAR_13;
    }

  *VAR_9 = FUNC_0 (VAR_6, VAR_4);
  *VAR_8 = 1;
  return VAR_18;
}
