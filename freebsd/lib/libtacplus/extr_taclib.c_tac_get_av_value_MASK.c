
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tac_handle {TYPE_1__* srvr_avs; } ;
struct srvr_str {int len; char const* data; } ;
struct TYPE_2__ {char* data; int len; } ;


 int VAR_0 ;
 char* FUNC_0 (struct tac_handle*,struct srvr_str*,int *) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char const*,int) ;

char *
FUNC_3(struct tac_handle *VAR_1, const char *VAR_2)
{
 int VAR_3, VAR_4;
 const char *VAR_5, *VAR_6;
 const char *VAR_7;
 int VAR_8;
 int VAR_9;
 struct srvr_str VAR_10;

 if (VAR_2 == ((void*)0) || ((VAR_4 = FUNC_1(VAR_2)) == 0))
  return ((void*)0);

 for (VAR_3=0; VAR_3<VAR_0; VAR_3++) {
  VAR_7 = VAR_1->srvr_avs[VAR_3].data;
  VAR_8 = VAR_1->srvr_avs[VAR_3].len;






  if (!VAR_7)
   break;

  if (VAR_4 < VAR_8 &&
      !FUNC_2(VAR_7, VAR_2, VAR_4)) {

   VAR_5 = VAR_7 + VAR_4;
   VAR_6 = VAR_7 + VAR_8;





   VAR_9 = 0;
   while ((*VAR_5 == '=' || *VAR_5 == '*' || *VAR_5 == ' ' ||
    *VAR_5 == '\t') && VAR_5 != VAR_6) {
    if (*VAR_5 == '=' || *VAR_5 == '*')
     VAR_9++;
    VAR_5++;
   }
   if (VAR_9 == 1) {
    VAR_10.len = VAR_6 - VAR_5;
    VAR_10.data = VAR_5;
    return FUNC_0(VAR_1, &VAR_10, ((void*)0));
   }
  }
 }
 return ((void*)0);
}
