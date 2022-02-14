
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct disk {int d_maxsize; int d_delmaxsize; } ;
struct bio {scalar_t__ bio_cmd; } ;
typedef int off_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static off_t
FUNC_0(struct disk *VAR_1, struct bio *VAR_2)
{
 if (VAR_2->bio_cmd == VAR_0)
  return (VAR_1->d_delmaxsize);
 return (VAR_1->d_maxsize);
}
