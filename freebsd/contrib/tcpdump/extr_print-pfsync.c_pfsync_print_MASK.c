
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct pfsync_subheader {size_t action; int count; } ;
struct pfsync_header {scalar_t__ version; int len; } ;
struct TYPE_6__ {scalar_t__ ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;
struct TYPE_7__ {int len; int (* print ) (TYPE_1__*,int const*) ;int name; } ;


 int FUNC_0 (TYPE_1__*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_4__* VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int const*) ;

__attribute__((used)) static void
FUNC_3(netdissect_options *VAR_4, struct pfsync_header *VAR_5,
    const u_char *VAR_6, u_int VAR_7)
{
 struct pfsync_subheader *VAR_8;
 int VAR_9, VAR_10, VAR_11;
 u_int VAR_12;

 VAR_10 = FUNC_1(VAR_5->len);

 FUNC_0((VAR_4, "PFSYNCv%d len %d", VAR_5->version, VAR_10));

 if (VAR_5->version != VAR_2)
  return;

 VAR_10 -= sizeof(*VAR_5);

 while (VAR_10 > 0) {
  if (VAR_7 < sizeof(*VAR_8))
   break;

  VAR_8 = (struct pfsync_subheader *)VAR_6;
  VAR_6 += sizeof(*VAR_8);
  VAR_7 -= sizeof(*VAR_8);
  VAR_10 -= sizeof(*VAR_8);

  if (VAR_8->action >= VAR_1) {
   FUNC_0((VAR_4, "\n    act UNKNOWN id %d",
       VAR_8->action));
   return;
  }

  VAR_9 = FUNC_1(VAR_8->count);
  FUNC_0((VAR_4, "\n    %s count %d", VAR_3[VAR_8->action].name,
      VAR_9));
  VAR_12 = VAR_3[VAR_8->action].len;

  if (VAR_8->action == VAR_0)
   return;

  if (VAR_3[VAR_8->action].print == ((void*)0)) {
   FUNC_0((VAR_4, "\n    unimplemented action %hhu",
       VAR_8->action));
   return;
  }

  for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
   if (VAR_7 < VAR_12) {
    VAR_7 = 0;
    break;
   }

   if (VAR_4->ndo_vflag)
    VAR_3[VAR_8->action].print(VAR_4, VAR_6);

   VAR_6 += VAR_12;
   VAR_7 -= VAR_12;
   VAR_10 -= VAR_12;
  }
 }

 if (VAR_10 > 0) {
  FUNC_0((VAR_4, "\n    ..."));
  return;
 }
 if (VAR_10 < 0) {
  FUNC_0((VAR_4, "\n    invalid header length"));
  return;
 }
 if (VAR_7 > 0)
  FUNC_0((VAR_4, "\n    invalid packet length"));
}
