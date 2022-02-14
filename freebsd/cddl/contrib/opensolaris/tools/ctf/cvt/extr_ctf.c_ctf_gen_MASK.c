
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_20__ {int iib_nobjts; int iib_nfuncs; int iib_types; int * iib_funcs; int * iib_objts; TYPE_1__* iib_td; } ;
typedef TYPE_3__ iiburst_t ;
struct TYPE_19__ {int ctp_magic; } ;
struct TYPE_21__ {void* cth_strlen; void* cth_stroff; void* cth_typeoff; void* cth_funcoff; void* cth_objtoff; void* cth_lbloff; void* cth_parname; void* cth_parlabel; TYPE_2__ cth_preamble; int cth_flags; int cth_version; int cth_magic; } ;
typedef TYPE_4__ ctf_header_t ;
struct TYPE_22__ {int ctb_strtab; } ;
typedef TYPE_5__ ctf_buf_t ;
typedef int caddr_t ;
struct TYPE_18__ {int td_labels; int td_parname; int td_parlabel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*) ;
 TYPE_5__* FUNC_4 () ;
 int FUNC_5 (int,char*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,TYPE_5__*) ;
 int FUNC_8 (TYPE_5__*,int) ;
 void* FUNC_9 (int *,int ) ;
 void* FUNC_10 (int *) ;
 int VAR_4 ;
 int FUNC_11 (TYPE_4__*,TYPE_5__*,size_t*) ;
 int FUNC_12 (TYPE_4__*,TYPE_5__*,size_t*) ;
 int FUNC_13 (int ,TYPE_5__*) ;
 int VAR_5 ;
 int FUNC_14 (int ,TYPE_5__*) ;
 int VAR_6 ;

caddr_t
FUNC_15(iiburst_t *VAR_7, size_t *VAR_8, int VAR_9)
{
 ctf_buf_t *VAR_10 = FUNC_4();
 ctf_header_t VAR_11;
 caddr_t VAR_12;

 int VAR_13;

 VAR_4 = VAR_9 & VAR_2;
 VAR_9 &= ~VAR_2;






 VAR_11.cth_magic = VAR_1;
 VAR_11.cth_version = VAR_3;
 VAR_11.cth_flags = VAR_9 ? VAR_0 : 0;
 VAR_11.cth_parlabel = FUNC_9(&VAR_10->ctb_strtab,
     VAR_7->iib_td->td_parlabel);
 VAR_11.cth_parname = FUNC_9(&VAR_10->ctb_strtab,
     VAR_7->iib_td->td_parname);

 VAR_11.cth_lbloff = 0;
 (void) FUNC_7(VAR_7->iib_td->td_labels, VAR_5,
     VAR_10);

 FUNC_8(VAR_10, 2);
 VAR_11.cth_objtoff = FUNC_2(VAR_10);
 for (VAR_13 = 0; VAR_13 < VAR_7->iib_nobjts; VAR_13++)
  FUNC_14(VAR_7->iib_objts[VAR_13], VAR_10);

 FUNC_8(VAR_10, 2);
 VAR_11.cth_funcoff = FUNC_2(VAR_10);
 for (VAR_13 = 0; VAR_13 < VAR_7->iib_nfuncs; VAR_13++)
  FUNC_13(VAR_7->iib_funcs[VAR_13], VAR_10);

 FUNC_8(VAR_10, 4);
 VAR_11.cth_typeoff = FUNC_2(VAR_10);
 (void) FUNC_7(VAR_7->iib_types, VAR_6, VAR_10);

 FUNC_5(2, "CTF wrote %d types\n", FUNC_6(VAR_7->iib_types));

 VAR_11.cth_stroff = FUNC_2(VAR_10);
 VAR_11.cth_strlen = FUNC_10(&VAR_10->ctb_strtab);

 if (VAR_4) {
  FUNC_0(VAR_11.cth_preamble.ctp_magic);
  FUNC_1(VAR_11.cth_parlabel);
  FUNC_1(VAR_11.cth_parname);
  FUNC_1(VAR_11.cth_lbloff);
  FUNC_1(VAR_11.cth_objtoff);
  FUNC_1(VAR_11.cth_funcoff);
  FUNC_1(VAR_11.cth_typeoff);
  FUNC_1(VAR_11.cth_stroff);
  FUNC_1(VAR_11.cth_strlen);
 }






 if (VAR_9)
  VAR_12 = FUNC_12(&VAR_11, VAR_10, VAR_8);
 else
  VAR_12 = FUNC_11(&VAR_11, VAR_10, VAR_8);

 FUNC_3(VAR_10);
 return (VAR_12);
}
