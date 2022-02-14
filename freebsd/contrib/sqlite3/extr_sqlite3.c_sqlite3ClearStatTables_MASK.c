
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zTab ;
struct TYPE_8__ {TYPE_1__* aDb; } ;
struct TYPE_7__ {TYPE_4__* db; } ;
struct TYPE_6__ {char* zDbSName; } ;
typedef TYPE_2__ Parse ;


 scalar_t__ FUNC_0 (TYPE_4__*,char*,char const*) ;
 int FUNC_1 (TYPE_2__*,char*,char const*,char*,char const*,char const*) ;
 int FUNC_2 (int,char*,char*,int) ;

__attribute__((used)) static void FUNC_3(
  Parse *VAR_0,
  int VAR_1,
  const char *VAR_2,
  const char *VAR_3
){
  int VAR_4;
  const char *VAR_5 = VAR_0->db->aDb[VAR_1].zDbSName;
  for(VAR_4=1; VAR_4<=4; VAR_4++){
    char VAR_6[24];
    FUNC_2(sizeof(VAR_6),VAR_6,"sqlite_stat%d",VAR_4);
    if( FUNC_0(VAR_0->db, VAR_6, VAR_5) ){
      FUNC_1(VAR_0,
        "DELETE FROM %Q.%s WHERE %s=%Q",
        VAR_5, VAR_6, VAR_2, VAR_3
      );
    }
  }
}
