
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct archive_read_filter {int data; TYPE_2__* archive; } ;
struct archive {int dummy; } ;
struct TYPE_3__ {int (* opener ) (struct archive*,int ) ;} ;
struct TYPE_4__ {TYPE_1__ client; } ;


 int VAR_0 ;
 int FUNC_0 (struct archive*,int ) ;

__attribute__((used)) static int
FUNC_1(struct archive_read_filter *VAR_1)
{
  int VAR_2 = VAR_0;
 if (VAR_1->archive->client.opener != ((void*)0))
  VAR_2 = (VAR_1->archive->client.opener)(
      (struct archive *)VAR_1->archive, VAR_1->data);
 return (VAR_2);
}
