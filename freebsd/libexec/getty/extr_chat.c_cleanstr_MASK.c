
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**,unsigned char const) ;
 unsigned char* FUNC_1 (unsigned char*,int) ;

__attribute__((used)) static const char *
FUNC_2(const unsigned char *VAR_0, int VAR_1)
{
 static unsigned char * VAR_2 = ((void*)0);
 static int VAR_3 = 0;

 if (VAR_3 < VAR_1 * 4 + 1)
  VAR_2 = FUNC_1(VAR_2, VAR_3 = VAR_1 * 4 + 1);

 if (VAR_2 == ((void*)0)) {
  VAR_3 = 0;
  return "(mem alloc error)";
 } else {
  int VAR_4 = 0;
  char * VAR_5 = VAR_2;

  while (VAR_4 < VAR_1)
   FUNC_0(&VAR_5, VAR_0[VAR_4++]);
  *VAR_5 = '\0';
 }

 return VAR_2;
}
