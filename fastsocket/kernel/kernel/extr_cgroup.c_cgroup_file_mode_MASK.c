
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cftype {scalar_t__ trigger; scalar_t__ write_string; scalar_t__ write_s64; scalar_t__ write_u64; scalar_t__ write; scalar_t__ read_seq_string; scalar_t__ read_map; scalar_t__ read_s64; scalar_t__ read_u64; scalar_t__ read; scalar_t__ mode; } ;
typedef scalar_t__ mode_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static mode_t FUNC_0(const struct cftype *VAR_2)
{
 mode_t VAR_3 = 0;

 if (VAR_2->mode)
  return VAR_2->mode;

 if (VAR_2->read || VAR_2->read_u64 || VAR_2->read_s64 ||
     VAR_2->read_map || VAR_2->read_seq_string)
  VAR_3 |= VAR_0;

 if (VAR_2->write || VAR_2->write_u64 || VAR_2->write_s64 ||
     VAR_2->write_string || VAR_2->trigger)
  VAR_3 |= VAR_1;

 return VAR_3;
}
