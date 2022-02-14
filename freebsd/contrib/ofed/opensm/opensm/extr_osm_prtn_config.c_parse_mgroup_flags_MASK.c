
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct precreate_mgroup {int flags; } ;
typedef int osm_log_t ;


 int FUNC_0 (int *,int ,char*,unsigned int,char*) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int,int *,int *,char*,char*) ;
 int FUNC_2 (char*,char**,char**) ;
 char* FUNC_3 (char*,char) ;

__attribute__((used)) static int FUNC_4(osm_log_t * VAR_1,
    struct precreate_mgroup *VAR_2,
    char *VAR_3, unsigned VAR_4)
{
 int VAR_5, VAR_6 = 0;
 char *VAR_7, *VAR_8, *VAR_9;
 do {
  VAR_7 = VAR_8 = ((void*)0);
  VAR_9 = FUNC_3(VAR_3, ',');
  if (VAR_9)
   *VAR_9++ = '\0';

  VAR_5 = FUNC_2(VAR_3, &VAR_7, &VAR_8);

  if (!FUNC_1(VAR_4, VAR_1, &VAR_2->flags,
         VAR_7, VAR_8)) {
   FUNC_0(VAR_1, VAR_0,
    "PARSE WARN: line %d: "
    "unrecognized mgroup flag \'%s\'"
    " - ignored\n", VAR_4, VAR_7);
  }
  VAR_3 += VAR_5;
  VAR_6 += VAR_5;
 } while (VAR_9);

 return (VAR_6);
}
