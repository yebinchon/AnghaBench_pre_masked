
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
typedef int ocs_textbuf_t ;
struct TYPE_4__ {char* model; } ;
typedef TYPE_1__ ocs_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*,char*) ;
 int * FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (char*,char*,size_t) ;

__attribute__((used)) static void
FUNC_3(ocs_t *VAR_2, char *VAR_3, ocs_textbuf_t *VAR_4)
{
 uint8_t *VAR_5;
 uint32_t VAR_6;
 char VAR_7[256];

 VAR_5 = FUNC_1(VAR_2, VAR_1);
 if (VAR_5) {
  VAR_6 = *VAR_5 ++;
  FUNC_2(VAR_7, (char*)VAR_5, VAR_6);
  VAR_7[VAR_6] = '\0';
  FUNC_0(VAR_4, VAR_0, "pn", VAR_7);
 } else {
  FUNC_0(VAR_4, VAR_0, "pn", VAR_2->model);
 }
}
