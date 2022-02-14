
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracepoint_iter {int tracepoint; int module; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tracepoint_iter*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct tracepoint_iter*) ;

__attribute__((used)) static void FUNC_3(struct tracepoint_iter *VAR_2)
{
 int VAR_3 = 0;


 if (!VAR_2->module) {
  VAR_3 = FUNC_1(&VAR_2->tracepoint,
    VAR_0, VAR_1);
  if (VAR_3)
   goto end;
 }

 VAR_3 = FUNC_0(VAR_2);
end:
 if (!VAR_3)
  FUNC_2(VAR_2);
}
