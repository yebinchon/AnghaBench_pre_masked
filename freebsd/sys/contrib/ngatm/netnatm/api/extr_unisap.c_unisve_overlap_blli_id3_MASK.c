
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unisve_blli_id3 {scalar_t__ proto; scalar_t__ user; scalar_t__ ipi; scalar_t__ oui; scalar_t__ pid; scalar_t__ noipi; } ;


 int FUNC_0 (struct unisve_blli_id3 const*,struct unisve_blli_id3 const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

int
FUNC_1(const struct unisve_blli_id3 *VAR_3,
    const struct unisve_blli_id3 *VAR_4)
{
 FUNC_0(VAR_3, VAR_4);

 if (VAR_3->proto != VAR_4->proto)
  return (0);
 if (VAR_3->proto == VAR_2)
  return (VAR_3->user == VAR_4->user);
 if (VAR_3->proto == VAR_1) {
  if (VAR_3->noipi && VAR_4->noipi)
   return (1);
  if (!VAR_3->noipi && !VAR_4->noipi) {
   if (VAR_3->ipi == VAR_4->ipi) {
    if (VAR_3->ipi != VAR_0)
     return (1);
    if (VAR_3->oui == VAR_4->oui && VAR_3->pid == VAR_4->pid)
     return (1);
   }
  }
  return (0);
 }
 return (1);
}
