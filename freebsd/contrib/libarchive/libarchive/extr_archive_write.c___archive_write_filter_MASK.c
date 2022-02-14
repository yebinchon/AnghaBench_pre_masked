
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_write_filter {int (* write ) (struct archive_write_filter*,void const*,size_t) ;size_t bytes_written; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct archive_write_filter*,void const*,size_t) ;

int
FUNC_1(struct archive_write_filter *VAR_2,
    const void *VAR_3, size_t VAR_4)
{
 int VAR_5;
 if (VAR_4 == 0)
  return(VAR_1);
 if (VAR_2->write == ((void*)0))


  return(VAR_0);
 VAR_5 = (VAR_2->write)(VAR_2, VAR_3, VAR_4);
 VAR_2->bytes_written += VAR_4;
 return (VAR_5);
}
