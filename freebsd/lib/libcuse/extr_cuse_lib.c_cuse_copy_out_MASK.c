
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cuse_dev_entered {scalar_t__ is_local; int cmd; } ;
struct cuse_data_chunk {uintptr_t local_ptr; uintptr_t peer_ptr; int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,void const*,...) ;
 int FUNC_1 (int ) ;
 struct cuse_dev_entered* FUNC_2 () ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (scalar_t__,int ,struct cuse_data_chunk*) ;
 int FUNC_4 (void*,void const*,int) ;

int
FUNC_5(const void *VAR_5, void *VAR_6, int VAR_7)
{
 struct cuse_data_chunk VAR_8;
 struct cuse_dev_entered *VAR_9;
 int VAR_10;

 if ((VAR_4 < 0) || (VAR_7 < 0))
  return (VAR_1);

 VAR_9 = FUNC_2();
 if (VAR_9 == ((void*)0))
  return (VAR_1);

 FUNC_0("cuse: copy_out(%p,%p,%d), cmd = %d = %s\n",
     VAR_5, VAR_6, VAR_7, VAR_9->cmd, FUNC_1(VAR_9->cmd));

 if (VAR_9->is_local) {
  FUNC_4(VAR_6, VAR_5, VAR_7);
 } else {
  VAR_8.local_ptr = (uintptr_t)VAR_5;
  VAR_8.peer_ptr = (uintptr_t)VAR_6;
  VAR_8.length = VAR_7;

  VAR_10 = FUNC_3(VAR_4, VAR_2, &VAR_8);
  if (VAR_10) {
   FUNC_0("cuse: copy_out() error = %d\n", VAR_3);
   return (VAR_0);
  }
 }
 return (0);
}
