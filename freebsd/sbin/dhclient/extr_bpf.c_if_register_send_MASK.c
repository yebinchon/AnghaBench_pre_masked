
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct interface_info {int ufdesc; int wfdesc; } ;
struct bpf_version {scalar_t__ bv_major; scalar_t__ bv_minor; TYPE_1__* bf_insns; int bf_len; } ;
struct bpf_program {scalar_t__ bv_major; scalar_t__ bv_minor; TYPE_1__* bf_insns; int bf_len; } ;
typedef int on ;
typedef int cap_rights_t ;
struct TYPE_2__ {int k; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 TYPE_1__* VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct interface_info*,int ) ;
 scalar_t__ FUNC_5 (int ,int ,struct bpf_version*) ;
 int FUNC_6 (int,int ,int ,int*,int) ;
 int FUNC_7 (int ,int ,int ) ;

void
FUNC_8(struct interface_info *VAR_16)
{
 cap_rights_t VAR_17;
 struct bpf_version VAR_18;
 struct bpf_program VAR_19;
 int VAR_20, VAR_21 = 1;


 VAR_16->wfdesc = FUNC_4(VAR_16, VAR_12);


 if (FUNC_5(VAR_16->wfdesc, VAR_3, &VAR_18) < 0)
  FUNC_2("Can't get BPF version: %m");

 if (VAR_18.bv_major != VAR_4 ||
     VAR_18.bv_minor < VAR_5)
  FUNC_2("Kernel BPF version out of range - recompile dhcpd!");


 VAR_19.bf_len = VAR_15;
 VAR_19.bf_insns = VAR_14;

 if (VAR_14[7].k == 0x1fff)
  VAR_14[7].k = FUNC_3(VAR_10|VAR_11);

 if (FUNC_5(VAR_16->wfdesc, VAR_2, &VAR_19) < 0)
  FUNC_2("Can't install write filter program: %m");

 if (FUNC_5(VAR_16->wfdesc, VAR_1, ((void*)0)) < 0)
  FUNC_2("Cannot lock bpf");

 FUNC_0(&VAR_17, VAR_6);
 if (FUNC_1(VAR_16->wfdesc, &VAR_17) < 0)
  FUNC_2("Can't limit bpf descriptor: %m");




 if ((VAR_20 = FUNC_7(VAR_0, VAR_13, VAR_8)) == -1)
  FUNC_2("socket(SOCK_RAW): %m");
 if (FUNC_6(VAR_20, VAR_7, VAR_9, &VAR_21,
     sizeof(VAR_21)) == -1)
  FUNC_2("setsockopt(IP_HDRINCL): %m");
 VAR_16->ufdesc = VAR_20;
}
