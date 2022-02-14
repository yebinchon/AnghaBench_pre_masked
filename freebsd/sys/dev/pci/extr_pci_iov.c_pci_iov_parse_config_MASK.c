
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcicfg_iov {int iov_schema; } ;
struct pci_iov_arg {int len; int config; } ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,void*,int ) ;
 int FUNC_1 (void*,int ) ;
 void* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (void*,int ,int ) ;
 int VAR_5 ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static int
FUNC_7(struct pcicfg_iov *VAR_6, struct pci_iov_arg *VAR_7,
    nvlist_t **VAR_8)
{
 void *VAR_9;
 nvlist_t *VAR_10;
 int VAR_11;

 VAR_10 = ((void*)0);
 VAR_9 = ((void*)0);

 if (VAR_7->len > VAR_5) {
  VAR_11 = VAR_1;
  goto out;
 }

 VAR_9 = FUNC_2(VAR_7->len, VAR_2, VAR_3);

 VAR_11 = FUNC_0(VAR_7->config, VAR_9, VAR_7->len);
 if (VAR_11 != 0)
  goto out;

 VAR_10 = FUNC_5(VAR_9, VAR_7->len, VAR_4);
 if (VAR_10 == ((void*)0)) {
  VAR_11 = VAR_0;
  goto out;
 }

 VAR_11 = FUNC_6(VAR_6->iov_schema, VAR_10);
 if (VAR_11 != 0)
  goto out;

 VAR_11 = FUNC_4(VAR_10);
 if (VAR_11 != 0)
  goto out;

 *VAR_8 = VAR_10;
 VAR_10 = ((void*)0);

out:
 FUNC_3(VAR_10);
 FUNC_1(VAR_9, VAR_2);
 return (VAR_11);
}
