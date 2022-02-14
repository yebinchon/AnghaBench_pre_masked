
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int id ;
struct TYPE_14__ {char* dtpd_provider; char* dtpd_name; scalar_t__ dtpd_id; } ;
typedef TYPE_2__ dtrace_probedesc_t ;
struct TYPE_15__ {char const* dtpda_prefix; scalar_t__ dtpda_indent; scalar_t__ dtpda_flow; TYPE_5__* dtpda_edesc; TYPE_2__* dtpda_pdesc; } ;
typedef TYPE_3__ dtrace_probedata_t ;
struct TYPE_16__ {TYPE_1__** dt_pdesc; } ;
typedef TYPE_4__ dtrace_hdl_t ;
typedef scalar_t__ dtrace_flowkind_t ;
struct TYPE_17__ {size_t dtepd_epid; scalar_t__ dtepd_size; } ;
typedef TYPE_5__ dtrace_eprobedesc_t ;
typedef size_t dtrace_epid_t ;
struct TYPE_18__ {size_t dtbd_size; scalar_t__ dtbd_data; } ;
typedef TYPE_6__ dtrace_bufdesc_t ;
struct TYPE_13__ {scalar_t__ dtpd_id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*,size_t,TYPE_5__**,TYPE_2__**) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (char const*) ;
 char* FUNC_4 (char*,char const*) ;

__attribute__((used)) static int
FUNC_5(dtrace_hdl_t *VAR_4, dtrace_probedata_t *VAR_5, dtrace_epid_t VAR_6,
    dtrace_bufdesc_t *VAR_7, size_t VAR_8)
{
 dtrace_probedesc_t *VAR_9 = VAR_5->dtpda_pdesc, *VAR_10;
 dtrace_eprobedesc_t *VAR_11 = VAR_5->dtpda_edesc, *VAR_12;
 char *VAR_13 = VAR_9->dtpd_provider, *VAR_14 = VAR_9->dtpd_name, *VAR_15;
 dtrace_flowkind_t VAR_16 = VAR_1;
 const char *VAR_17 = ((void*)0);
 static const char *VAR_18[2] = { " -> ", " => " };
 static const char *VAR_19[2] = { " <- ", " <= " };
 static const char *VAR_20 = "entry", *VAR_21 = "return";
 static int VAR_22 = 0, VAR_23 = 0;
 dtrace_epid_t VAR_24, VAR_25 = VAR_11->dtepd_epid;
 int VAR_26;

 if (VAR_22 == 0) {
  FUNC_0(VAR_23 == 0);
  VAR_22 = FUNC_3(VAR_20);
  VAR_23 = FUNC_3(VAR_21);
 }
 if ((VAR_15 = FUNC_4(VAR_14, VAR_20)) != ((void*)0) && VAR_15[VAR_22] == '\0' &&
     (VAR_15 == VAR_14 || VAR_15[-1] == '-')) {
  VAR_16 = VAR_0;
  VAR_17 = VAR_18[FUNC_2(VAR_13, "syscall") == 0];
 } else if ((VAR_15 = FUNC_4(VAR_14, VAR_21)) != ((void*)0) && VAR_15[VAR_23] == '\0' &&
     (VAR_15 == VAR_14 || VAR_15[-1] == '-')) {
  VAR_16 = VAR_2;
  VAR_17 = VAR_19[FUNC_2(VAR_13, "syscall") == 0];
 }







 if (VAR_16 == VAR_0) {
  if ((VAR_6 != VAR_3 && VAR_25 != VAR_6 &&
      VAR_9->dtpd_id == VAR_4->dt_pdesc[VAR_6]->dtpd_id))
   VAR_16 = VAR_1;
 }






 if (VAR_16 == VAR_2) {
  VAR_8 += VAR_11->dtepd_size;

  do {
   if (VAR_8 >= VAR_7->dtbd_size)
    goto out;

   VAR_24 = *(uint32_t *)((uintptr_t)VAR_7->dtbd_data + VAR_8);

   if (VAR_24 == VAR_3)
    VAR_8 += sizeof (VAR_25);
  } while (VAR_24 == VAR_3);

  if ((VAR_26 = FUNC_1(VAR_4, VAR_24, &VAR_12, &VAR_10)) != 0)
   return (VAR_26);

  if (VAR_24 != VAR_25 && VAR_10->dtpd_id == VAR_9->dtpd_id)
   VAR_16 = VAR_1;
 }

out:
 if (VAR_16 == VAR_0 || VAR_16 == VAR_2) {
  VAR_5->dtpda_prefix = VAR_17;
 } else {
  VAR_5->dtpda_prefix = "| ";
 }

 if (VAR_16 == VAR_2 && VAR_5->dtpda_indent > 0)
  VAR_5->dtpda_indent -= 2;

 VAR_5->dtpda_flow = VAR_16;

 return (0);
}
