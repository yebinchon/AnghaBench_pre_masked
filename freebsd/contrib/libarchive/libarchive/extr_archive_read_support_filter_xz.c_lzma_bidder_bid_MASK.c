
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct archive_read_filter_bidder {int dummy; } ;
struct archive_read_filter {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (int) ;
 unsigned char* FUNC_1 (struct archive_read_filter*,int,int *) ;
 int FUNC_2 (unsigned char const*) ;
 scalar_t__ FUNC_3 (unsigned char const*) ;

__attribute__((used)) static int
FUNC_4(struct archive_read_filter_bidder *VAR_0,
    struct archive_read_filter *VAR_1)
{
 const unsigned char *VAR_2;
 ssize_t VAR_3;
 uint32_t VAR_4;
 uint64_t VAR_5;
 int VAR_6;

 (void)VAR_0;

 VAR_2 = FUNC_1(VAR_1, 14, &VAR_3);
 if (VAR_2 == ((void*)0))
  return (0);
 VAR_6 = 0;
 if (VAR_2[0] > (4 * 5 + 4) * 9 + 8)
  return (0);

 if (VAR_2[0] == 0x5d || VAR_2[0] == 0x5e)
  VAR_6 += 8;





 VAR_5 = FUNC_3(VAR_2+5);
 if (VAR_5 == (uint64_t)FUNC_0(-1))
  VAR_6 += 64;
 VAR_4 = FUNC_2(VAR_2+1);
 switch (VAR_4) {
 case 0x00001000:
 case 0x00002000:
 case 0x00004000:
 case 0x00008000:
 case 0x00010000:

 case 0x00020000:
 case 0x00040000:
 case 0x00080000:

 case 0x00100000:

 case 0x00200000:

 case 0x00400000:

 case 0x00800000:

 case 0x01000000:

 case 0x02000000:

 case 0x04000000:

 case 0x08000000:
  VAR_6 += 32;
  break;
 default:





  if (VAR_4 <= 0x03F00000 && VAR_4 >= 0x00300000 &&
      (VAR_4 & ((1 << 20)-1)) == 0 &&
      VAR_6 == 8 + 64) {
   VAR_6 += 32;
   break;
  }



  return (0);
 }




 return (VAR_6);
}
