
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef scalar_t__ u_int ;
typedef int u_char ;
struct TYPE_5__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 scalar_t__ FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int const,scalar_t__ const) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * FUNC_4 (TYPE_1__*,int const*,int const*,scalar_t__) ;
 int VAR_2 ;

__attribute__((used)) static const u_char *
FUNC_5(netdissect_options *VAR_3,
                  const u_char *VAR_4, const u_char *VAR_5, u_int VAR_6)
{
 const u_char *VAR_7 = VAR_4;
 const u_int VAR_8 = VAR_6;
 uint16_t VAR_9;

 while (VAR_6) {
  if (VAR_6 < VAR_0)
   goto invalid;

  FUNC_3(*VAR_4, 4);
  FUNC_2((VAR_3, "\n\t  queue_id %u", FUNC_1(VAR_4)));
  VAR_4 += 4;

  FUNC_3(*VAR_4, 2);
  VAR_9 = FUNC_0(VAR_4);
  VAR_4 += 2;
  FUNC_2((VAR_3, ", len %u", VAR_9));
  if (VAR_9 < VAR_0 || VAR_9 > VAR_6)
   goto invalid;

  FUNC_3(*VAR_4, 2);
  VAR_4 += 2;

  if (VAR_3->ndo_vflag < 2) {
   FUNC_3(*VAR_4, VAR_9 - VAR_0);
   VAR_4 += VAR_9 - VAR_0;
   goto next_queue;
  }
  if (VAR_5 == (VAR_4 = FUNC_4(VAR_3, VAR_4, VAR_5, VAR_9 - VAR_0)))
   return VAR_5;
next_queue:
  VAR_6 -= VAR_9;
 }
 return VAR_4;

invalid:
 FUNC_2((VAR_3, "%s", VAR_1));
 FUNC_3(*VAR_7, VAR_8);
 return VAR_7 + VAR_8;
trunc:
 FUNC_2((VAR_3, "%s", VAR_2));
 return VAR_5;
}
