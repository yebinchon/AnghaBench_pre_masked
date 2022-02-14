
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nmreq_register {scalar_t__ nr_mode; scalar_t__ nr_host_rx_rings; scalar_t__ nr_host_tx_rings; scalar_t__ nr_mem_id; } ;
struct nmreq_header {scalar_t__ nr_reqtype; int nr_name; scalar_t__ nr_body; } ;
struct netmap_mem_d {int dummy; } ;
struct netmap_adapter {int na_flags; scalar_t__ active_fds; scalar_t__ num_host_rx_rings; scalar_t__ num_host_tx_rings; int name; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct ifnet*) ;
 struct ifnet* FUNC_2 (int ) ;
 int FUNC_3 (struct netmap_adapter*) ;
 int FUNC_4 (struct netmap_adapter*) ;
 int FUNC_5 (struct ifnet*,struct netmap_mem_d*,struct netmap_adapter**) ;
 int FUNC_6 (struct nmreq_header*,struct netmap_adapter**,struct netmap_mem_d*,int) ;
 int FUNC_7 (struct nmreq_header*,struct netmap_adapter**,struct netmap_mem_d*,int) ;
 int FUNC_8 (struct nmreq_header*,struct netmap_adapter**,struct netmap_mem_d*,int) ;
 int FUNC_9 (struct nmreq_header*,struct netmap_adapter**,struct netmap_mem_d*,int) ;
 struct netmap_mem_d* FUNC_10 (scalar_t__) ;
 int FUNC_11 (struct netmap_mem_d*) ;
 int FUNC_12 (char*,int ,scalar_t__,scalar_t__) ;
 int FUNC_13 (char*) ;

int
FUNC_14(struct nmreq_header *VAR_6,
       struct netmap_adapter **VAR_7, struct ifnet **VAR_8,
       struct netmap_mem_d *VAR_9, int VAR_10)
{
 struct nmreq_register *VAR_11 = (struct nmreq_register *)(uintptr_t)VAR_6->nr_body;
 int VAR_12 = 0;
 struct netmap_adapter *VAR_13 = ((void*)0);
 int VAR_14 = 0;

 *VAR_7 = ((void*)0);
 *VAR_8 = ((void*)0);

 if (VAR_6->nr_reqtype != VAR_3) {
  return VAR_0;
 }

 if (VAR_11->nr_mode == VAR_4 ||
   VAR_11->nr_mode == VAR_5) {

  FUNC_13("Deprecated pipe nr_mode, use xx{yy or xx}yy syntax");
  return VAR_0;
 }

 FUNC_0();




 if (VAR_9 == ((void*)0) && VAR_11->nr_mem_id) {
  VAR_9 = FUNC_10(VAR_11->nr_mem_id);
  if (VAR_9 == ((void*)0))
   return VAR_0;

  VAR_14 = 1;
 }
 VAR_12 = FUNC_7(VAR_6, VAR_7, VAR_9, VAR_10);
 if (VAR_12 || *VAR_7 != ((void*)0))
  goto out;


 VAR_12 = FUNC_6(VAR_6, VAR_7, VAR_9, VAR_10);
 if (VAR_12 || *VAR_7 != ((void*)0))
  goto out;


 VAR_12 = FUNC_8(VAR_6, VAR_7, VAR_9, VAR_10);
 if (VAR_12 || *VAR_7 != ((void*)0))
  goto out;


 VAR_12 = FUNC_9(VAR_6, VAR_7, VAR_9, VAR_10);
 if (VAR_12)
  goto out;

 if (*VAR_7 != ((void*)0))
  goto out;







 *VAR_8 = FUNC_2(VAR_6->nr_name);
 if (*VAR_8 == ((void*)0)) {
  VAR_12 = VAR_1;
  goto out;
 }

 VAR_12 = FUNC_5(*VAR_8, VAR_9, &VAR_13);
 if (VAR_12)
  goto out;

 *VAR_7 = VAR_13;
 FUNC_3(VAR_13);





 if (((*VAR_7)->na_flags & VAR_2) && (*VAR_7)->active_fds == 0) {
  if (VAR_11->nr_host_tx_rings)
   (*VAR_7)->num_host_tx_rings = VAR_11->nr_host_tx_rings;
  if (VAR_11->nr_host_rx_rings)
   (*VAR_7)->num_host_rx_rings = VAR_11->nr_host_rx_rings;
 }
 FUNC_12("%s: host tx %d rx %u", (*VAR_7)->name, (*VAR_7)->num_host_tx_rings,
   (*VAR_7)->num_host_rx_rings);

out:
 if (VAR_12) {
  if (VAR_13)
   FUNC_4(VAR_13);
  if (*VAR_8) {
   FUNC_1(*VAR_8);
   *VAR_8 = ((void*)0);
  }
 }
 if (VAR_14)
  FUNC_11(VAR_9);

 return VAR_12;
}
