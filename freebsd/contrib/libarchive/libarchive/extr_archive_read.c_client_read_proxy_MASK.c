
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct archive_read_filter {int data; TYPE_2__* archive; } ;
typedef int ssize_t ;
struct TYPE_3__ {int (* reader ) (int *,int ,void const**) ;} ;
struct TYPE_4__ {int archive; TYPE_1__ client; } ;


 int FUNC_0 (int *,int ,void const**) ;

__attribute__((used)) static ssize_t
FUNC_1(struct archive_read_filter *VAR_0, const void **VAR_1)
{
 ssize_t VAR_2;
 VAR_2 = (VAR_0->archive->client.reader)(&VAR_0->archive->archive,
     VAR_0->data, VAR_1);
 return (VAR_2);
}
