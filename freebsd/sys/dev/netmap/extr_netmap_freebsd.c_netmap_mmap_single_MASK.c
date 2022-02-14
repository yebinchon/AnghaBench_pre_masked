
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_ooffset_t ;
typedef int * vm_object_t ;
struct netmap_vm_handle_t {struct netmap_priv_d* priv; struct cdev* dev; } ;
struct netmap_priv_d {int np_refs; int * np_nifp; } ;
struct cdev {int dummy; } ;
typedef int intmax_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_5 ;
 int * FUNC_2 (struct netmap_vm_handle_t*,int ,int *,scalar_t__,int,scalar_t__,int *) ;
 int FUNC_3 (void**) ;
 int FUNC_4 (struct netmap_vm_handle_t*,int ) ;
 struct netmap_vm_handle_t* FUNC_5 (int,int ,int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,struct cdev*,int ,int ,int **,int) ;

__attribute__((used)) static int
FUNC_8(struct cdev *VAR_8, vm_ooffset_t *VAR_9,
 vm_size_t VAR_10, vm_object_t *VAR_11, int VAR_12)
{
 int VAR_13;
 struct netmap_vm_handle_t *VAR_14;
 struct netmap_priv_d *VAR_15;
 vm_object_t VAR_16;

 if (VAR_7)
  FUNC_7("cdev %p foff %jd size %jd objp %p prot %d", VAR_8,
      (intmax_t )*VAR_9, (intmax_t )VAR_10, VAR_11, VAR_12);

 VAR_14 = FUNC_5(sizeof(struct netmap_vm_handle_t), VAR_2,
         VAR_3 | VAR_4);
 if (VAR_14 == ((void*)0))
  return VAR_1;
 VAR_14->dev = VAR_8;

 FUNC_0();
 VAR_13 = FUNC_3((void**)&VAR_15);
 if (VAR_13)
  goto err_unlock;
 if (VAR_15->np_nifp == ((void*)0)) {
  VAR_13 = VAR_0;
  goto err_unlock;
 }
 VAR_14->priv = VAR_15;
 VAR_15->np_refs++;
 FUNC_1();

 VAR_16 = FUNC_2(VAR_14, VAR_5,
  &VAR_6, VAR_10, VAR_12,
  *VAR_9, ((void*)0));
 if (VAR_16 == ((void*)0)) {
  FUNC_6("cdev_pager_allocate failed");
  VAR_13 = VAR_0;
  goto err_deref;
 }

 *VAR_11 = VAR_16;
 return 0;

err_deref:
 FUNC_0();
 VAR_15->np_refs--;
err_unlock:
 FUNC_1();

 FUNC_4(VAR_14, VAR_2);
 return VAR_13;
}
