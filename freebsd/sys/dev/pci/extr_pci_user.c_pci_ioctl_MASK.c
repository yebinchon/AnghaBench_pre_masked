
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef union pci_conf_union {int dummy; } pci_conf_union ;
typedef int u_long ;
struct thread {int dummy; } ;
struct pci_match_conf {int num_matches; size_t offset; size_t match_buf_len; size_t num_patterns; int pat_buf_len; void* status; int generation; int matches; int patterns; } ;
struct pci_map {int pm_size; int pm_value; } ;
struct TYPE_13__ {int pc_func; int pc_dev; int pc_bus; int pc_domain; } ;
struct pci_list_vpd_io {TYPE_5__ plvi_sel; } ;
struct TYPE_10__ {int pc_func; int pc_dev; int pc_bus; } ;
struct pci_io_old {int pi_reg; int pi_data; int pi_width; TYPE_2__ pi_sel; } ;
struct TYPE_12__ {int pc_func; int pc_dev; int pc_bus; int pc_domain; } ;
struct pci_io {int pi_reg; int pi_data; TYPE_4__ pi_sel; int pi_width; } ;
struct TYPE_15__ {char* pd_name; int pd_unit; } ;
struct TYPE_9__ {int dev; } ;
struct pci_devinfo {TYPE_7__ conf; TYPE_1__ cfg; } ;
struct pci_conf_io {int num_matches; size_t offset; size_t match_buf_len; size_t num_patterns; int pat_buf_len; void* status; int generation; int matches; int patterns; } ;
struct TYPE_14__ {int pc_func; int pc_dev; int pc_bus; int pc_domain; } ;
struct pci_bar_mmap {int pbm_flags; TYPE_6__ pbm_sel; } ;
struct TYPE_11__ {int pc_func; int pc_dev; int pc_bus; int pc_domain; } ;
struct pci_bar_io {int pbi_length; int pbi_enabled; int pbi_base; int pbi_reg; TYPE_3__ pbi_sel; } ;
struct devlist {int dummy; } ;
struct cdev {int dummy; } ;
typedef int pci_addr_t ;
typedef int * device_t ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 size_t VAR_13 ;
 struct pci_devinfo* FUNC_0 (struct devlist*) ;
 struct pci_devinfo* FUNC_1 (struct pci_devinfo*,int ) ;
 int FUNC_2 (int ,struct pci_match_conf*,int) ;
 int FUNC_3 (union pci_conf_union*,int ,size_t) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct pci_match_conf*,int ) ;
 struct pci_match_conf* FUNC_8 (int,int ,int) ;
 size_t FUNC_9 (int ,size_t) ;
 int FUNC_10 (int *,struct pci_map*) ;
 int FUNC_11 (int *,struct pci_bar_mmap*) ;
 int FUNC_12 (TYPE_7__*,union pci_conf_union*,int) ;
 int FUNC_13 (struct pci_match_conf*,scalar_t__,int) ;
 int FUNC_14 (struct pci_match_conf*,scalar_t__,int) ;
 int FUNC_15 (int,struct pci_match_conf*,int,TYPE_7__*) ;
 size_t FUNC_16 (int) ;
 struct devlist VAR_14 ;
 struct pci_map* FUNC_17 (int *,int ) ;
 int * FUNC_18 (int ,int ,int ,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_19 (int *,struct pci_list_vpd_io*) ;
 int FUNC_20 (int) ;
 size_t VAR_17 ;
 void* FUNC_21 (int *,int,int ) ;
 int FUNC_22 (int *,int,int,int ) ;
 int FUNC_23 (char*,char const*,int) ;

__attribute__((used)) static int
FUNC_24(struct cdev *VAR_18, u_long VAR_19, caddr_t VAR_20, int VAR_21, struct thread *VAR_22)
{
 device_t VAR_23;
 const char *VAR_24;
 struct devlist *VAR_25;
 struct pci_conf_io *VAR_26 = ((void*)0);
 struct pci_devinfo *VAR_27;
 struct pci_io *VAR_28;
 struct pci_bar_io *VAR_29;
 struct pci_list_vpd_io *VAR_30;
 struct pci_match_conf *VAR_31;
 struct pci_map *VAR_32;
 struct pci_bar_mmap *VAR_33;
 size_t VAR_34, VAR_35;
 int VAR_36, VAR_37, VAR_38, VAR_39;
 union pci_conf_union VAR_40;







 if (!(VAR_21 & VAR_4)) {
  switch (VAR_19) {
  case 136:
  case 137:
  case 132:
   break;
  default:
   return (VAR_3);
  }
 }


 switch (VAR_19) {
 case 136:
  VAR_26 = FUNC_8(sizeof(struct pci_conf_io), VAR_5,
      VAR_6 | VAR_7);
  FUNC_13(VAR_26, VAR_20, VAR_19);
  VAR_31 = ((void*)0);
  VAR_39 = 0;
  VAR_27 = ((void*)0);

  VAR_26->num_matches = 0;







  if ((VAR_26->offset != 0)
   && (VAR_26->generation != VAR_15)){
   VAR_26->status = VAR_11;
   VAR_36 = 0;
   goto getconfexit;
  }





  if (VAR_26->offset >= VAR_17) {
   VAR_26->status = VAR_10;
   VAR_36 = 0;
   goto getconfexit;
  }


  VAR_25 = &VAR_14;







  VAR_34 = FUNC_16(VAR_19);
  VAR_35 = FUNC_9(VAR_26->match_buf_len - (VAR_26->match_buf_len % VAR_34),
      VAR_17 * VAR_34);





  VAR_37 = VAR_35 / VAR_34;





  if ((VAR_26->num_patterns > 0) && (VAR_26->num_patterns < VAR_17)
   && (VAR_26->pat_buf_len > 0)) {
   if (VAR_26->num_patterns * FUNC_20(VAR_19) !=
       VAR_26->pat_buf_len) {

    VAR_26->status = VAR_9;
    VAR_36 = VAR_0;
    goto getconfexit;
   }




   VAR_31 = FUNC_8(VAR_26->pat_buf_len, VAR_5,
       VAR_6);
   VAR_36 = FUNC_2(VAR_26->patterns, VAR_31,
       VAR_26->pat_buf_len);
   if (VAR_36 != 0) {
    VAR_36 = VAR_0;
    goto getconfexit;
   }
   VAR_39 = VAR_26->num_patterns;
  } else if ((VAR_26->num_patterns > 0)
   || (VAR_26->pat_buf_len > 0)) {



   VAR_26->status = VAR_9;
   VAR_36 = VAR_0;
                       goto getconfexit;
  }





  for (VAR_26->num_matches = 0, VAR_38 = 0,
     VAR_27 = FUNC_0(VAR_25);
       VAR_27 != ((void*)0);
       VAR_27 = FUNC_1(VAR_27, VAR_16), VAR_38++) {

   if (VAR_38 < VAR_26->offset)
    continue;


   VAR_24 = ((void*)0);
   if (VAR_27->cfg.dev)
    VAR_24 = FUNC_4(VAR_27->cfg.dev);
   if (VAR_24) {
    FUNC_23(VAR_27->conf.pd_name, VAR_24,
     sizeof(VAR_27->conf.pd_name));
    VAR_27->conf.pd_name[VAR_13] = 0;
    VAR_27->conf.pd_unit =
     FUNC_5(VAR_27->cfg.dev);
   } else {
    VAR_27->conf.pd_name[0] = '\0';
    VAR_27->conf.pd_unit = 0;
   }

   if (VAR_31 == ((void*)0) ||
       FUNC_15(VAR_19, VAR_31, VAR_39,
       &VAR_27->conf) == 0) {
    if (VAR_26->num_matches >= VAR_37) {
     VAR_36 = 0;
     break;
    }

    FUNC_12(&VAR_27->conf, &VAR_40, VAR_19);
    VAR_36 = FUNC_3(&VAR_40,
        (caddr_t)VAR_26->matches +
        VAR_34 * VAR_26->num_matches, VAR_34);
    if (VAR_36)
     break;
    VAR_26->num_matches++;
   }
  }





  VAR_26->offset = VAR_38;





  VAR_26->generation = VAR_15;







  if (VAR_27 == ((void*)0))
   VAR_26->status = VAR_10;
  else
   VAR_26->status = VAR_12;

getconfexit:
  FUNC_14(VAR_26, VAR_20, VAR_19);
  FUNC_7(VAR_26, VAR_5);
  FUNC_7(VAR_31, VAR_5);

  break;
 case 131:
 case 129:
  VAR_28 = (struct pci_io *)VAR_20;
  switch(VAR_28->pi_width) {
  case 4:
  case 2:
  case 1:

   if (VAR_28->pi_reg < 0 ||
       VAR_28->pi_reg & (VAR_28->pi_width - 1)) {
    VAR_36 = VAR_0;
    break;
   }






   VAR_23 = FUNC_18(VAR_28->pi_sel.pc_domain,
       VAR_28->pi_sel.pc_bus, VAR_28->pi_sel.pc_dev,
       VAR_28->pi_sel.pc_func);
   if (VAR_23) {



    if (VAR_19 == 129)

     FUNC_22(VAR_23,
         VAR_28->pi_reg,
         VAR_28->pi_data,
         VAR_28->pi_width);







    else
     VAR_28->pi_data =
      FUNC_21(VAR_23,
         VAR_28->pi_reg,
         VAR_28->pi_width);
    VAR_36 = 0;
   } else {






     VAR_36 = VAR_1;
   }
   break;
  default:
   VAR_36 = VAR_0;
   break;
  }
  break;

 case 137:
  VAR_29 = (struct pci_bar_io *)VAR_20;





  VAR_23 = FUNC_18(VAR_29->pbi_sel.pc_domain,
      VAR_29->pbi_sel.pc_bus, VAR_29->pbi_sel.pc_dev,
      VAR_29->pbi_sel.pc_func);
  if (VAR_23 == ((void*)0)) {
   VAR_36 = VAR_1;
   break;
  }
  VAR_32 = FUNC_17(VAR_23, VAR_29->pbi_reg);
  if (VAR_32 == ((void*)0)) {
   VAR_36 = VAR_0;
   break;
  }
  VAR_29->pbi_base = VAR_32->pm_value;
  VAR_29->pbi_length = (pci_addr_t)1 << VAR_32->pm_size;
  VAR_29->pbi_enabled = FUNC_10(VAR_23, VAR_32);
  VAR_36 = 0;
  break;
 case 139:
  VAR_36 = 0;
  VAR_28 = (struct pci_io *)VAR_20;
  VAR_23 = FUNC_18(VAR_28->pi_sel.pc_domain, VAR_28->pi_sel.pc_bus,
           VAR_28->pi_sel.pc_dev, VAR_28->pi_sel.pc_func);
  if (VAR_23 != ((void*)0))
   VAR_28->pi_data = FUNC_6(VAR_23);
  else
   VAR_36 = VAR_1;
  break;
 case 132:
  VAR_30 = (struct pci_list_vpd_io *)VAR_20;





  VAR_23 = FUNC_18(VAR_30->plvi_sel.pc_domain,
      VAR_30->plvi_sel.pc_bus, VAR_30->plvi_sel.pc_dev,
      VAR_30->plvi_sel.pc_func);
  if (VAR_23 == ((void*)0)) {
   VAR_36 = VAR_1;
   break;
  }
  VAR_36 = FUNC_19(VAR_23, VAR_30);
  break;

 case 138:
  VAR_33 = (struct pci_bar_mmap *)VAR_20;
  if ((VAR_21 & VAR_4) == 0 &&
      (VAR_33->pbm_flags & VAR_8) != 0)
   return (VAR_3);
  VAR_23 = FUNC_18(VAR_33->pbm_sel.pc_domain,
      VAR_33->pbm_sel.pc_bus, VAR_33->pbm_sel.pc_dev,
      VAR_33->pbm_sel.pc_func);
  VAR_36 = VAR_23 == ((void*)0) ? VAR_1 : FUNC_11(VAR_23, VAR_33);
  break;

 default:
  VAR_36 = VAR_2;
  break;
 }

 return (VAR_36);
}
