
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct pvscsi_softc {size_t msg_ring_num_pages; int * msg_ring_ppn; int use_msg; } ;
struct pvscsi_cmd_desc_setup_msg_ring {size_t num_pages; int * ring_ppns; } ;
typedef int cmd ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct pvscsi_cmd_desc_setup_msg_ring*,int) ;
 int FUNC_2 (struct pvscsi_softc*,int ,struct pvscsi_cmd_desc_setup_msg_ring*,int) ;

__attribute__((used)) static void
FUNC_3(struct pvscsi_softc *VAR_1)
{
 struct pvscsi_cmd_desc_setup_msg_ring VAR_2;
 uint32_t VAR_3;

 FUNC_0(VAR_1->use_msg, ("msg is not being used"));

 FUNC_1(&VAR_2, sizeof(VAR_2));

 VAR_2.num_pages = VAR_1->msg_ring_num_pages;
 for (VAR_3 = 0; VAR_3 < VAR_1->msg_ring_num_pages; ++VAR_3) {
  VAR_2.ring_ppns[VAR_3] = VAR_1->msg_ring_ppn[VAR_3];
 }

 FUNC_2(VAR_1, VAR_0, &VAR_2, sizeof(VAR_2));
}
