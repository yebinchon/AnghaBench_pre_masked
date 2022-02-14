
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read_filter_bidder {int dummy; } ;
struct archive_read_filter {int dummy; } ;
typedef int ssize_t ;


 unsigned char* FUNC_0 (struct archive_read_filter*,int,int *) ;
 scalar_t__ FUNC_1 (unsigned char const*,char*,int) ;

__attribute__((used)) static int
FUNC_2(struct archive_read_filter_bidder *VAR_0, struct archive_read_filter *VAR_1)
{
 const unsigned char *VAR_2;
 ssize_t VAR_3;
 int VAR_4;

 (void)VAR_0;


 VAR_2 = FUNC_0(VAR_1, 14, &VAR_3);
 if (VAR_2 == ((void*)0))
  return (0);


 VAR_4 = 0;
 if (FUNC_1(VAR_2, "BZh", 3) != 0)
  return (0);
 VAR_4 += 24;


 if (VAR_2[3] < '1' || VAR_2[3] > '9')
  return (0);
 VAR_4 += 5;




 if (FUNC_1(VAR_2 + 4, "\x31\x41\x59\x26\x53\x59", 6) == 0)
  VAR_4 += 48;
 else if (FUNC_1(VAR_2 + 4, "\x17\x72\x45\x38\x50\x90", 6) == 0)
  VAR_4 += 48;
 else
  return (0);

 return (VAR_4);
}
