
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct bcma_sport_list {int dummy; } ;
struct bcma_sport {int m_rid; int sp_num_maps; struct bcma_sport_list sp_maps; int m_size; int m_base; scalar_t__ m_region_num; } ;
struct bcma_map {int m_rid; int sp_num_maps; struct bcma_sport_list sp_maps; int m_size; int m_base; scalar_t__ m_region_num; } ;
struct bcma_erom_sport_region {scalar_t__ region_type; int size; int base_addr; int region_port; } ;
struct bcma_erom {int dummy; } ;
struct TYPE_2__ {int core_idx; } ;
struct bcma_corecfg {TYPE_1__ core_info; } ;
typedef int bus_size_t ;
typedef int bhnd_port_type ;
typedef scalar_t__ bcma_rmid_t ;
typedef int bcma_pid_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bcma_erom*,char*,int ,int ,int ,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct bcma_sport_list*,struct bcma_sport*,int ) ;
 struct bcma_sport* FUNC_2 (int ,int ) ;
 struct bcma_sport_list* FUNC_3 (struct bcma_corecfg*,int ) ;
 int FUNC_4 (struct bcma_erom*,struct bcma_erom_sport_region*) ;
 int FUNC_5 (struct bcma_erom*,scalar_t__,int *) ;
 int FUNC_6 (struct bcma_erom*,int ) ;
 int FUNC_7 (struct bcma_erom*) ;
 int FUNC_8 (struct bcma_sport*) ;
 int FUNC_9 (int ) ;
 int VAR_6 ;
 struct bcma_sport* FUNC_10 (int,int ,int ) ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_11(struct bcma_erom *VAR_8,
    struct bcma_corecfg *VAR_9, bcma_pid_t VAR_10,
    uint8_t VAR_11)
{
 struct bcma_sport *VAR_12;
 struct bcma_sport_list *VAR_13;
 bus_size_t VAR_14;
 int VAR_15;
 bhnd_port_type VAR_16;

 VAR_15 = 0;


 VAR_15 = FUNC_5(VAR_8, VAR_11, &VAR_16);
 if (VAR_15)
  return (VAR_15);


 VAR_13 = FUNC_3(VAR_9, VAR_16);


 VAR_12 = FUNC_2(VAR_10, VAR_16);
 if (VAR_12 == ((void*)0))
  return (VAR_3);


 for (bcma_rmid_t VAR_17 = 0;; VAR_17++) {
  struct bcma_map *VAR_18;
  struct bcma_erom_sport_region VAR_19;



  if (VAR_17 == VAR_0) {
   FUNC_0(VAR_8, "core%u %s%u: region count reached "
       "upper limit of %u\n",
       VAR_9->core_info.core_idx,
       FUNC_9(VAR_16),
       VAR_10, VAR_0);

   VAR_15 = VAR_1;
   goto cleanup;
  }


  VAR_14 = FUNC_7(VAR_8);
  VAR_15 = FUNC_4(VAR_8, &VAR_19);
  if (VAR_15 && VAR_15 != VAR_2) {
   FUNC_0(VAR_8, "core%u %s%u.%u: invalid slave port "
       "address region\n",
       VAR_9->core_info.core_idx,
       FUNC_9(VAR_16),
       VAR_10, VAR_17);
   goto cleanup;
  }


  if (VAR_15 == VAR_2) {

   VAR_15 = 0;
   break;
  }



  if (VAR_19.region_port != VAR_10 ||
      VAR_19.region_type != VAR_11)
  {

   FUNC_6(VAR_8, VAR_14);

   VAR_15 = 0;
   goto cleanup;
  }




  VAR_18 = FUNC_10(sizeof(struct bcma_map), VAR_4, VAR_5);
  if (VAR_18 == ((void*)0)) {
   VAR_15 = VAR_3;
   goto cleanup;
  }

  VAR_18->m_region_num = VAR_17;
  VAR_18->m_base = VAR_19.base_addr;
  VAR_18->m_size = VAR_19.size;
  VAR_18->m_rid = -1;


  FUNC_1(&VAR_12->sp_maps, VAR_18, VAR_6);
  VAR_12->sp_num_maps++;
 }

cleanup:


 if (VAR_15 == 0) {
  FUNC_1(VAR_13, VAR_12, VAR_7);
 } else if (VAR_12 != ((void*)0)) {
  FUNC_8(VAR_12);
 }

 return VAR_15;
}
