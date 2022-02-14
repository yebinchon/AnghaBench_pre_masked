
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inbuf {char* base; char const* limit; } ;


 int FUNC_0 (char*,int) ;
 char* FUNC_1 (char const*) ;

__attribute__((used)) static char *FUNC_2(struct inbuf *VAR_0, int VAR_1)
{
 const char *VAR_2;

 VAR_2 = VAR_0->base + VAR_1;
 while (1) {
  if (VAR_2 >= VAR_0->limit || VAR_2 < VAR_0->base)
   FUNC_0("String offset %d overruns string table\n",
       VAR_1);

  if (*VAR_2 == '\0')
   break;

  VAR_2++;
 }

 return FUNC_1(VAR_0->base + VAR_1);
}
