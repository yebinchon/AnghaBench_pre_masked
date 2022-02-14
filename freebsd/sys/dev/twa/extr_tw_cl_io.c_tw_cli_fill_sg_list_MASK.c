
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tw_cli_ctlr_context {int flags; int ctlr_handle; } ;
struct tw_cl_sg_desc64 {void* length; int address; } ;
struct tw_cl_sg_desc32 {void* length; void* address; } ;
typedef int TW_VOID ;
typedef int TW_INT8 ;
typedef size_t TW_INT32 ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (void*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ,int ,char*) ;
 int FUNC_3 () ;

TW_VOID
FUNC_4(struct tw_cli_ctlr_context *VAR_2, TW_VOID *VAR_3,
 TW_VOID *VAR_4, TW_INT32 VAR_5)
{
 TW_INT32 VAR_6;

 FUNC_2(10, VAR_2->ctlr_handle, FUNC_3(), "entered");

 if (VAR_2->flags & VAR_0) {
  struct tw_cl_sg_desc64 *VAR_7 =
   (struct tw_cl_sg_desc64 *)VAR_3;
  struct tw_cl_sg_desc64 *VAR_8 =
   (struct tw_cl_sg_desc64 *)VAR_4;

  FUNC_2(10, VAR_2->ctlr_handle, FUNC_3(),
   "64 bit addresses");
  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
   VAR_8[VAR_6].address = FUNC_1(VAR_7->address);
   VAR_8[VAR_6].length = FUNC_0(VAR_7->length);
   VAR_7++;
   if (VAR_2->flags & VAR_1)
    VAR_7 = (struct tw_cl_sg_desc64 *)
     (((TW_INT8 *)(VAR_7)) + 4);
  }
 } else {
  struct tw_cl_sg_desc32 *VAR_9 =
   (struct tw_cl_sg_desc32 *)VAR_3;
  struct tw_cl_sg_desc32 *VAR_10 =
   (struct tw_cl_sg_desc32 *)VAR_4;

  FUNC_2(10, VAR_2->ctlr_handle, FUNC_3(),
   "32 bit addresses");
  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
   VAR_10[VAR_6].address = FUNC_0(VAR_9[VAR_6].address);
   VAR_10[VAR_6].length = FUNC_0(VAR_9[VAR_6].length);
  }
 }
}
