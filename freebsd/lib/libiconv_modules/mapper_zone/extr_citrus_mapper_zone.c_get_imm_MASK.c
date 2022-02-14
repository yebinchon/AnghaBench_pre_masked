
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _parse_state {unsigned long ps_u_imm; } ;
struct _memstream {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 char FUNC_2 (struct _memstream*) ;
 int FUNC_3 (struct _memstream*) ;
 unsigned long FUNC_4 (char*,char**,int ) ;

__attribute__((used)) static int
FUNC_5(struct _memstream *VAR_3, struct _parse_state *VAR_4)
{
 int VAR_5, VAR_6, VAR_7 = 0;
 char VAR_8[VAR_0 + 1];
 char *VAR_9;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
retry:
  VAR_5 = FUNC_3(VAR_3);
  if (VAR_6 == 0) {
   if (VAR_7 == 0 && (VAR_5 == '+' || VAR_5 == '-')) {
    VAR_7 = VAR_5;
    FUNC_2(VAR_3);
    goto retry;
   } else if (!FUNC_0(VAR_5))
    break;
  } else if (!FUNC_1(VAR_5))
   if (!(VAR_6 == 1 && VAR_5 == 'x'))
    break;
  VAR_8[VAR_6] = FUNC_2(VAR_3);
 }
 VAR_8[VAR_6] = '\0';
 VAR_4->ps_u_imm = FUNC_4(VAR_8, &VAR_9, 0);
 if ((VAR_9 - VAR_8) != VAR_6)
  return (VAR_1);
 if (VAR_7 == '-')
  VAR_4->ps_u_imm = (unsigned long)-(long)VAR_4->ps_u_imm;
 return (VAR_2);
}
