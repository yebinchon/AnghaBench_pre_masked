
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct pvscsi_softc {size_t req_ring_num_pages; size_t cmp_ring_num_pages; int * cmp_ring_ppn; int * req_ring_ppn; int rings_state_ppn; } ;
struct pvscsi_cmd_desc_setup_rings {size_t req_ring_num_pages; size_t cmp_ring_num_pages; int * cmp_ring_ppns; int * req_ring_ppns; int rings_state_ppn; } ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 (struct pvscsi_cmd_desc_setup_rings*,int) ;
 int FUNC_1 (struct pvscsi_softc*,int ,struct pvscsi_cmd_desc_setup_rings*,int) ;

__attribute__((used)) static void
FUNC_2(struct pvscsi_softc *VAR_1)
{
 struct pvscsi_cmd_desc_setup_rings VAR_2;
 uint32_t VAR_3;

 FUNC_0(&VAR_2, sizeof(VAR_2));

 VAR_2.rings_state_ppn = VAR_1->rings_state_ppn;

 VAR_2.req_ring_num_pages = VAR_1->req_ring_num_pages;
 for (VAR_3 = 0; VAR_3 < VAR_1->req_ring_num_pages; ++VAR_3) {
  VAR_2.req_ring_ppns[VAR_3] = VAR_1->req_ring_ppn[VAR_3];
 }

 VAR_2.cmp_ring_num_pages = VAR_1->cmp_ring_num_pages;
 for (VAR_3 = 0; VAR_3 < VAR_1->cmp_ring_num_pages; ++VAR_3) {
  VAR_2.cmp_ring_ppns[VAR_3] = VAR_1->cmp_ring_ppn[VAR_3];
 }

 FUNC_1(VAR_1, VAR_0, &VAR_2, sizeof(VAR_2));
}
