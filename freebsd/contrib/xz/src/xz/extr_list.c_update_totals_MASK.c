
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ memusage_max; scalar_t__ min_version; int all_have_sizes; int idx; scalar_t__ stream_padding; } ;
typedef TYPE_1__ xz_file_info ;
struct TYPE_5__ {scalar_t__ memusage_max; scalar_t__ min_version; int all_have_sizes; int checks; int stream_padding; int uncompressed_size; int compressed_size; int blocks; int streams; int files; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 TYPE_3__ VAR_0 ;

__attribute__((used)) static void
FUNC_5(const xz_file_info *VAR_1)
{

 ++VAR_0.files;
 VAR_0.streams += FUNC_3(VAR_1->idx);
 VAR_0.blocks += FUNC_0(VAR_1->idx);
 VAR_0.compressed_size += FUNC_2(VAR_1->idx);
 VAR_0.uncompressed_size += FUNC_4(VAR_1->idx);
 VAR_0.stream_padding += VAR_1->stream_padding;
 VAR_0.checks |= FUNC_1(VAR_1->idx);

 if (VAR_0.memusage_max < VAR_1->memusage_max)
  VAR_0.memusage_max = VAR_1->memusage_max;

 if (VAR_0.min_version < VAR_1->min_version)
  VAR_0.min_version = VAR_1->min_version;

 VAR_0.all_have_sizes &= VAR_1->all_have_sizes;

 return;
}
