
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bio {scalar_t__ bio_cmd; scalar_t__ bio_length; } ;
struct TYPE_2__ {int gs_write_bytes_in_flight; int gs_writes_in_flight; int gs_bytes_in_flight; int gs_in_flight; int gs_done; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct bio *VAR_2)
{

 VAR_1.gs_done++;
 VAR_1.gs_in_flight--;
 VAR_1.gs_bytes_in_flight -= VAR_2->bio_length;
 if (VAR_2->bio_cmd == VAR_0) {
  VAR_1.gs_writes_in_flight--;
  VAR_1.gs_write_bytes_in_flight -= VAR_2->bio_length;
 }
}
