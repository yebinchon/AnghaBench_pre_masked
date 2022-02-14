
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int stream; scalar_t__ stream_valid; struct iso9660* block_pointers; struct iso9660* uncompressed_buffer; } ;
struct TYPE_6__ {struct iso9660* files; } ;
struct TYPE_5__ {struct iso9660* reqs; } ;
struct iso9660 {struct iso9660* utf16be_previous_path; struct iso9660* utf16be_path; TYPE_3__ entry_zisofs; TYPE_2__ pending_files; int previous_pathname; int pathname; TYPE_1__ read_ce_req; } ;
struct archive_read {TYPE_4__* format; int archive; } ;
struct TYPE_8__ {int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct iso9660*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct iso9660*) ;

__attribute__((used)) static int
FUNC_5(struct archive_read *VAR_4)
{
 struct iso9660 *VAR_5;
 int VAR_6 = VAR_2;

 VAR_5 = (struct iso9660 *)(VAR_4->format->data);
 FUNC_4(VAR_5);
 FUNC_2(VAR_5->read_ce_req.reqs);
 FUNC_1(&VAR_5->pathname);
 FUNC_1(&VAR_5->previous_pathname);
 FUNC_2(VAR_5->pending_files.files);
 FUNC_2(VAR_5->utf16be_path);
 FUNC_2(VAR_5->utf16be_previous_path);
 FUNC_2(VAR_5);
 (VAR_4->format->data) = ((void*)0);
 return (VAR_6);
}
