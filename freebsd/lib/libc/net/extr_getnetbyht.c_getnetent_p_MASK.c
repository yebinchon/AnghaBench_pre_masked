
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netent_data {char* netbuf; char** net_aliases; int * netf; } ;
struct netent {char* n_name; char** n_aliases; int n_addrtype; int n_net; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 char* FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (int ,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (char*,char*) ;

__attribute__((used)) static int
FUNC_8(struct netent *VAR_5, struct netent_data *VAR_6)
{
 char *VAR_7, *VAR_8, *VAR_9;
 char *VAR_10, **VAR_11;
 int VAR_12;
 char VAR_13[VAR_1 + 1];

 if (VAR_6->netf == ((void*)0) &&
     (VAR_6->netf = FUNC_3(VAR_4, "re")) == ((void*)0))
  return (-1);
again:
 VAR_7 = FUNC_2(VAR_13, sizeof VAR_13, VAR_6->netf);
 if (VAR_7 == ((void*)0))
  return (-1);
 if (*VAR_7 == '#')
  goto again;
 VAR_10 = FUNC_7(VAR_7, "#\n");
 if (VAR_10 != ((void*)0))
  *VAR_10 = '\0';
 VAR_8 = VAR_6->netbuf;
 VAR_9 = VAR_6->netbuf + sizeof VAR_6->netbuf;
 VAR_5->n_name = VAR_8;
 VAR_10 = FUNC_7(VAR_7, " \t");
 if (VAR_10 == ((void*)0))
  goto again;
 *VAR_10++ = '\0';
 VAR_12 = FUNC_6(VAR_7) + 1;
 if (VAR_9 - VAR_8 < VAR_12) {
  FUNC_0(FUNC_1(), VAR_2);
  return (-1);
 }
 FUNC_5(VAR_8, VAR_7, VAR_9 - VAR_8);
 VAR_8 += VAR_12;
 while (*VAR_10 == ' ' || *VAR_10 == '\t')
  VAR_10++;
 VAR_7 = FUNC_7(VAR_10, " \t");
 if (VAR_7 != ((void*)0))
  *VAR_7++ = '\0';
 VAR_5->n_net = FUNC_4(VAR_10);
 VAR_5->n_addrtype = VAR_0;
 VAR_11 = VAR_5->n_aliases = VAR_6->net_aliases;
 if (VAR_7 != ((void*)0)) {
  VAR_10 = VAR_7;
  while (VAR_10 && *VAR_10) {
   if (*VAR_10 == ' ' || *VAR_10 == '\t') {
    VAR_10++;
    continue;
   }
   if (VAR_11 >= &VAR_6->net_aliases[VAR_3 - 1])
    break;
   VAR_7 = FUNC_7(VAR_10, " \t");
   if (VAR_7 != ((void*)0))
    *VAR_7++ = '\0';
   VAR_12 = FUNC_6(VAR_10) + 1;
   if (VAR_9 - VAR_8 < VAR_12)
    break;
   FUNC_5(VAR_8, VAR_10, VAR_9 - VAR_8);
   *VAR_11++ = VAR_8;
   VAR_8 += VAR_12;
   VAR_10 = VAR_7;
  }
 }
 *VAR_11 = ((void*)0);
 return (0);
}
