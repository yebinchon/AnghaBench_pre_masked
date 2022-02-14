
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct archive_read_filter_bidder {int dummy; } ;
struct archive_read_filter {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned char* FUNC_0 (struct archive_read_filter*,int,int *) ;
 scalar_t__ FUNC_1 (unsigned char const*) ;

__attribute__((used)) static int
FUNC_2(struct archive_read_filter_bidder *VAR_2,
    struct archive_read_filter *VAR_3)
{
 const unsigned char *VAR_4;
 ssize_t VAR_5;
 int VAR_6;
 uint32_t VAR_7;

 (void)VAR_2;


 VAR_4 = FUNC_0(VAR_3, 11, &VAR_5);
 if (VAR_4 == ((void*)0))
  return (0);


 VAR_6 = 0;
 if ((VAR_7 = FUNC_1(VAR_4)) == VAR_1) {
  unsigned char VAR_8, VAR_9;

  VAR_6 += 32;


  VAR_8 = VAR_4[4];

  if (((VAR_8 & 0xc0) >> 6) != 1)
   return (0);

  if (VAR_8 & 2)
   return (0);
  VAR_6 += 8;
  VAR_9 = VAR_4[5];

  if (((VAR_9 & 0x70) >> 4) < 4)
   return (0);

  if (VAR_9 & ~0x70)
   return (0);
  VAR_6 += 8;
 } else if (VAR_7 == VAR_0) {
  VAR_6 += 32;
 }

 return (VAR_6);
}
