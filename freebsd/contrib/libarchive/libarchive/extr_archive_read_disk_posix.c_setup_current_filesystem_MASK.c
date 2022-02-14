
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tree {TYPE_1__* current_filesystem; } ;
struct archive_read_disk {int archive; struct tree* tree; } ;
struct TYPE_2__ {int synthetic; int remote; int xfer_align; int max_xfer_size; int min_xfer_size; int incr_xfer_size; long name_max; scalar_t__ noatime; } ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,char*) ;
 int VAR_5 ;
 long FUNC_1 (int ,int ) ;
 int FUNC_2 (struct tree*,int,char*) ;
 long FUNC_3 (int ,int ) ;
 int FUNC_4 (struct tree*) ;
 int FUNC_5 (struct tree*) ;
 scalar_t__ FUNC_6 (struct tree*) ;
 scalar_t__ FUNC_7 (struct tree*) ;

__attribute__((used)) static int
FUNC_8(struct archive_read_disk *VAR_6)
{
 struct tree *VAR_7 = VAR_6->tree;



 VAR_7->current_filesystem->synthetic = -1;
 VAR_7->current_filesystem->remote = -1;
 VAR_7->current_filesystem->noatime = 0;
 (void)FUNC_2(VAR_7, -1, ".");
 VAR_7->current_filesystem->xfer_align = -1;
 VAR_7->current_filesystem->max_xfer_size = -1;
 VAR_7->current_filesystem->min_xfer_size = -1;
 VAR_7->current_filesystem->incr_xfer_size = -1;
 return (VAR_1);
}
