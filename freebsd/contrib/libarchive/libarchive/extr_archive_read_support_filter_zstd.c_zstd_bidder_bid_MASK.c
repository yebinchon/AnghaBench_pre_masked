
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read_filter_bidder {int dummy; } ;
struct archive_read_filter {int dummy; } ;
typedef int ssize_t ;


 unsigned char* FUNC_0 (struct archive_read_filter*,int,int *) ;
 unsigned int FUNC_1 (unsigned char const*) ;

__attribute__((used)) static int
FUNC_2(struct archive_read_filter_bidder *VAR_0,
    struct archive_read_filter *VAR_1)
{
 const unsigned char *VAR_2;
 ssize_t VAR_3;
 unsigned VAR_4;


 const unsigned VAR_5 = 0xFD2FB528U;

 (void) VAR_0;

 VAR_2 = FUNC_0(VAR_1, 4, &VAR_3);
 if (VAR_2 == ((void*)0))
  return (0);

 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4 == VAR_5)
  return (32);

 return (0);
}
