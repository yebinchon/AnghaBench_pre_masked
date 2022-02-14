
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int s_addr; } ;
struct TYPE_7__ {int s_addr; } ;
struct TYPE_6__ {int s_addr; } ;
struct TYPE_5__ {int s_addr; } ;
struct ipt_ip {int invflags; int flags; int proto; int outiface; int outiface_mask; int iniface; int iniface_mask; TYPE_4__ dst; TYPE_3__ dmsk; TYPE_2__ src; TYPE_1__ smsk; } ;
struct iphdr {int saddr; int daddr; int protocol; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*,...) ;
 unsigned long FUNC_2 (char const*,int ,int ) ;

__attribute__((used)) static inline bool
FUNC_3(const struct iphdr *VAR_7,
  const char *VAR_8,
  const char *VAR_9,
  const struct ipt_ip *VAR_10,
  int VAR_11)
{
 unsigned long VAR_12;



 if ((((VAR_7->saddr&VAR_10->smsk.s_addr) != VAR_10->src.s_addr) ^ !!(VAR_10->invflags & (VAR_4)))

     || (((VAR_7->daddr&VAR_10->dmsk.s_addr) != VAR_10->dst.s_addr) ^ !!(VAR_10->invflags & (VAR_1)))) {

  FUNC_1("Source or dest mismatch.\n");

  FUNC_1("SRC: %pI4. Mask: %pI4. Target: %pI4.%s\n",
   &VAR_7->saddr, &VAR_10->smsk.s_addr, &VAR_10->src.s_addr,
   VAR_10->invflags & VAR_4 ? " (INV)" : "");
  FUNC_1("DST: %pI4 Mask: %pI4 Target: %pI4.%s\n",
   &VAR_7->daddr, &VAR_10->dmsk.s_addr, &VAR_10->dst.s_addr,
   VAR_10->invflags & VAR_1 ? " (INV)" : "");
  return 0;
 }

 VAR_12 = FUNC_2(VAR_8, VAR_10->iniface, VAR_10->iniface_mask);

 if (((VAR_12 != 0) ^ !!(VAR_10->invflags & (VAR_5)))) {
  FUNC_1("VIA in mismatch (%s vs %s).%s\n",
   VAR_8, VAR_10->iniface,
   VAR_10->invflags&VAR_5 ?" (INV)":"");
  return 0;
 }

 VAR_12 = FUNC_2(VAR_9, VAR_10->outiface, VAR_10->outiface_mask);

 if (((VAR_12 != 0) ^ !!(VAR_10->invflags & (VAR_6)))) {
  FUNC_1("VIA out mismatch (%s vs %s).%s\n",
   VAR_9, VAR_10->outiface,
   VAR_10->invflags&VAR_6 ?" (INV)":"");
  return 0;
 }


 if (VAR_10->proto
     && ((VAR_7->protocol != VAR_10->proto) ^ !!(VAR_10->invflags & (VAR_3)))) {
  FUNC_1("Packet protocol %hi does not match %hi.%s\n",
   VAR_7->protocol, VAR_10->proto,
   VAR_10->invflags&VAR_3 ? " (INV)":"");
  return 0;
 }



 if ((((VAR_10->flags&VAR_0) && !VAR_11) ^ !!(VAR_10->invflags & (VAR_2)))) {
  FUNC_1("Fragment rule but not fragment.%s\n",
   VAR_10->invflags & VAR_2 ? " (INV)" : "");
  return 0;
 }

 return 1;
}
