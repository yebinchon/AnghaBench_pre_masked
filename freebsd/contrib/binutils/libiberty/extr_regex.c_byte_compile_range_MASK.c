
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int reg_syntax_t ;
typedef int reg_errcode_t ;
typedef int RE_TRANSLATE_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (char const) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static reg_errcode_t
FUNC_3 (unsigned int VAR_6, const char **VAR_7,
                    const char *VAR_8, RE_TRANSLATE_TYPE VAR_9,
                    reg_syntax_t VAR_10, unsigned char *VAR_11)
{
  unsigned VAR_12;
  const char *VAR_13 = *VAR_7;
  reg_errcode_t VAR_14;





  unsigned VAR_15;


  if (VAR_13 == VAR_8)
    return VAR_2;



  (*VAR_7)++;


  VAR_14 = VAR_10 & VAR_4 ? VAR_2 : VAR_3;
  VAR_6 = FUNC_1 (VAR_6);





  VAR_15 = ((unsigned)FUNC_1(VAR_13[0]) & ((1 << VAR_0) - 1));

  for (VAR_12 = VAR_6; VAR_12 <= VAR_15; ++VAR_12)
    {
      FUNC_0 (FUNC_1 (VAR_12));
      VAR_14 = VAR_3;
    }


  return VAR_14;
}
