
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct pfsync_tdb {int cur_bytes; int rpl; int spi; } ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(netdissect_options *VAR_0, const void *VAR_1)
{
 const struct pfsync_tdb *VAR_2 = VAR_1;

 FUNC_0((VAR_0, "\n\tspi: 0x%08x rpl: %ju cur_bytes: %ju",
     FUNC_2(VAR_2->spi), (uintmax_t )FUNC_1(VAR_2->rpl),
     (uintmax_t )FUNC_1(VAR_2->cur_bytes)));
}
