
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct archive_read_filter {int data; TYPE_2__* archive; } ;
typedef int int64_t ;
struct TYPE_3__ {int (* seeker ) (int *,int ,int ,int) ;} ;
struct TYPE_4__ {int archive; TYPE_1__ client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *,int ,int ,int) ;

__attribute__((used)) static int64_t
FUNC_2(struct archive_read_filter *VAR_2, int64_t VAR_3, int VAR_4)
{





 if (VAR_2->archive->client.seeker == ((void*)0)) {
  FUNC_0(&VAR_2->archive->archive, VAR_0,
      "Current client reader does not support seeking a device");
  return (VAR_1);
 }
 return (VAR_2->archive->client.seeker)(&VAR_2->archive->archive,
     VAR_2->data, VAR_3, VAR_4);
}
