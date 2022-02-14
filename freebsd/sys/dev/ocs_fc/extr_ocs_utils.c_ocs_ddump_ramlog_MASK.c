
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int ocs_textbuf_t ;
struct TYPE_4__ {scalar_t__ textbuf_base; int textbuf_count; int * textbufs; } ;
typedef TYPE_1__ ocs_ramlog_t ;
typedef int int32_t ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int32_t
FUNC_6(ocs_textbuf_t *VAR_0, ocs_ramlog_t *VAR_1)
{
 uint32_t VAR_2;
 ocs_textbuf_t *VAR_3;
 int VAR_4;

 if ((VAR_1 == ((void*)0)) || (VAR_1->textbufs == ((void*)0))) {
  return -1;
 }

 FUNC_1(VAR_0, "driver-log", 0);


 FUNC_1(VAR_0, "startofday", 0);

 if (VAR_1->textbuf_base) {
  VAR_3 = &VAR_1->textbufs[0];
  FUNC_3(VAR_0, FUNC_4(VAR_3), FUNC_5(VAR_3));
 }
 FUNC_0(VAR_0, "startofday", 0);


 FUNC_1(VAR_0, "recent", 0);


 VAR_4 = FUNC_2(VAR_1, VAR_1->textbuf_count);

 for (VAR_2 = VAR_1->textbuf_base; VAR_2 < VAR_1->textbuf_count; VAR_2 ++) {
  VAR_3 = &VAR_1->textbufs[VAR_4];
  FUNC_3(VAR_0, FUNC_4(VAR_3), FUNC_5(VAR_3));
  VAR_4 = FUNC_2(VAR_1, VAR_4);
 }
 FUNC_0(VAR_0, "recent", 0);
 FUNC_0(VAR_0, "driver-log", 0);

 return 0;
}
