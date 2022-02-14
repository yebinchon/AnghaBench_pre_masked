
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tw_cli_ctlr_context {int io_lock; int gen_lock; int active; } ;
struct tw_cl_ctlr_handle {scalar_t__ cl_ctlr_ctxt; } ;
typedef int TW_UINT32 ;
typedef int TW_INT32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct tw_cl_ctlr_handle*,int ,int ,int,int,int ,char*,char*,int ) ;
 int FUNC_1 (int,struct tw_cl_ctlr_handle*,int ,char*) ;
 int FUNC_2 (struct tw_cli_ctlr_context*) ;
 int FUNC_3 (struct tw_cli_ctlr_context*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct tw_cl_ctlr_handle*,int ) ;

TW_INT32
FUNC_6(struct tw_cl_ctlr_handle *VAR_6, TW_UINT32 VAR_7)
{
 struct tw_cli_ctlr_context *VAR_8 =
  (struct tw_cli_ctlr_context *)(VAR_6->cl_ctlr_ctxt);
 TW_INT32 VAR_9;

 FUNC_1(3, VAR_6, FUNC_4(), "entered");




 VAR_8->active = VAR_1;

 FUNC_2(VAR_8);


 if ((VAR_9 = FUNC_3(VAR_8, VAR_0,
   0, 0, 0, 0, 0, VAR_3, VAR_3, VAR_3,
   VAR_3, VAR_3)))
  FUNC_0(VAR_6, VAR_1,
   VAR_2,
   0x1015, 0x1, VAR_4,
   "Can't close connection with controller",
   "error = %d", VAR_9);

 if (VAR_7 & VAR_5)
  goto ret;


 FUNC_5(VAR_6, VAR_8->gen_lock);
 FUNC_5(VAR_6, VAR_8->io_lock);

ret:
 return(VAR_9);
}
