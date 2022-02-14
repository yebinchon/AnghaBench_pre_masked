
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct xt_table_info {unsigned int* hook_entry; int size; } ;
struct TYPE_5__ {int name; } ;
struct TYPE_6__ {TYPE_1__ user; } ;
struct TYPE_7__ {TYPE_2__ u; } ;
struct ip6t_standard_target {int verdict; TYPE_3__ target; } ;
struct TYPE_8__ {unsigned int pcnt; } ;
struct ip6t_entry {int comefrom; int target_offset; unsigned int next_offset; TYPE_4__ counters; int ipv6; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,unsigned int,...) ;
 scalar_t__ FUNC_1 (struct ip6t_entry*) ;
 int FUNC_2 (char*,unsigned int,unsigned int,int) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct xt_table_info *VAR_3,
     unsigned int VAR_4, void *VAR_5)
{
 unsigned int VAR_6;



 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  unsigned int VAR_7 = VAR_3->hook_entry[VAR_6];
  struct ip6t_entry *VAR_8 = (struct ip6t_entry *)(VAR_5 + VAR_7);

  if (!(VAR_4 & (1 << VAR_6)))
   continue;


  VAR_8->counters.pcnt = VAR_7;

  for (;;) {
   struct ip6t_standard_target *VAR_9
    = (void *)FUNC_1(VAR_8);
   int VAR_10 = VAR_8->comefrom & (1 << VAR_6);

   if (VAR_8->comefrom & (1 << VAR_1)) {
    FUNC_2("iptables: loop hook %u pos %u %08X.\n",
           VAR_6, VAR_7, VAR_8->comefrom);
    return 0;
   }
   VAR_8->comefrom |= ((1 << VAR_6) | (1 << VAR_1));


   if ((VAR_8->target_offset == sizeof(struct ip6t_entry)
       && (FUNC_3(VAR_9->target.u.user.name,
           VAR_0) == 0)
       && VAR_9->verdict < 0
       && FUNC_4(&VAR_8->ipv6)) || VAR_10) {
    unsigned int VAR_11, VAR_12;

    if ((FUNC_3(VAR_9->target.u.user.name,
         VAR_0) == 0) &&
        VAR_9->verdict < -VAR_2 - 1) {
     FUNC_0("mark_source_chains: bad "
      "negative verdict (%i)\n",
        VAR_9->verdict);
     return 0;
    }



    do {
     VAR_8->comefrom ^= (1<<VAR_1);
     VAR_11 = VAR_7;
     VAR_7 = VAR_8->counters.pcnt;
     VAR_8->counters.pcnt = 0;


     if (VAR_7 == VAR_11)
      goto next;

     VAR_8 = (struct ip6t_entry *)
      (VAR_5 + VAR_7);
    } while (VAR_11 == VAR_7 + VAR_8->next_offset);


    VAR_12 = VAR_8->next_offset;
    VAR_8 = (struct ip6t_entry *)
     (VAR_5 + VAR_7 + VAR_12);
    VAR_8->counters.pcnt = VAR_7;
    VAR_7 += VAR_12;
   } else {
    int VAR_13 = VAR_9->verdict;

    if (FUNC_3(VAR_9->target.u.user.name,
        VAR_0) == 0
        && VAR_13 >= 0) {
     if (VAR_13 > VAR_3->size -
      sizeof(struct ip6t_entry)) {
      FUNC_0("mark_source_chains: "
       "bad verdict (%i)\n",
        VAR_13);
      return 0;
     }

     FUNC_0("Jump rule %u -> %u\n",
       VAR_7, VAR_13);
    } else {

     VAR_13 = VAR_7 + VAR_8->next_offset;
    }
    VAR_8 = (struct ip6t_entry *)
     (VAR_5 + VAR_13);
    VAR_8->counters.pcnt = VAR_7;
    VAR_7 = VAR_13;
   }
  }
  next:
  FUNC_0("Finished chain %u\n", VAR_6);
 }
 return 1;
}
