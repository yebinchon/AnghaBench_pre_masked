
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ u_int ;
struct bounce_zone {int free_bpages; int total_bpages; int bounce_page_list; int lowaddr; } ;
struct bounce_page {scalar_t__ vaddr; int busaddr; } ;
typedef TYPE_1__* bus_dma_tag_t ;
struct TYPE_3__ {struct bounce_zone* bounce_zone; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,struct bounce_page*,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ,int ,int,unsigned long,int ,int ,int ) ;
 int FUNC_2 (struct bounce_page*,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__) ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_7(bus_dma_tag_t VAR_8, u_int VAR_9)
{
 struct bounce_zone *VAR_10;
 int VAR_11;

 VAR_10 = VAR_8->bounce_zone;
 VAR_11 = 0;
 while (VAR_9 > 0) {
  struct bounce_page *VAR_12;

  VAR_12 = (struct bounce_page *)FUNC_3(sizeof(*VAR_12), VAR_1,
      VAR_2 | VAR_3);

  if (VAR_12 == ((void*)0))
   break;
  VAR_12->vaddr = (vm_offset_t)FUNC_1(VAR_4, VAR_0,
      VAR_2, 0ul, VAR_10->lowaddr, VAR_4, 0);
  if (VAR_12->vaddr == 0) {
   FUNC_2(VAR_12, VAR_1);
   break;
  }
  VAR_12->busaddr = FUNC_6(VAR_12->vaddr);
  FUNC_4(&VAR_5);
  FUNC_0(&VAR_10->bounce_page_list, VAR_12, VAR_6);
  VAR_7++;
  VAR_10->total_bpages++;
  VAR_10->free_bpages++;
  FUNC_5(&VAR_5);
  VAR_11++;
  VAR_9--;
 }
 return (VAR_11);
}
