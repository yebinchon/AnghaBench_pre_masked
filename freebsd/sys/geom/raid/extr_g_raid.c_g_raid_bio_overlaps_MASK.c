
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio {scalar_t__ bio_offset; scalar_t__ bio_length; } ;
typedef scalar_t__ off_t ;



__attribute__((used)) static int
FUNC_0(const struct bio *VAR_0, off_t VAR_1, off_t VAR_2)
{
 off_t VAR_3 = VAR_1 + VAR_2 - 1;
 off_t VAR_4 = VAR_0->bio_offset;
 off_t VAR_5 = VAR_0->bio_offset + VAR_0->bio_length - 1;

 if (VAR_5 < VAR_1)
  return (0);
 if (VAR_3 < VAR_4)
  return (0);
 return (1);
}
