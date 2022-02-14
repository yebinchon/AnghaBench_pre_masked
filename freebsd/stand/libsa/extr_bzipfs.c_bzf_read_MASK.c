
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct open_file {scalar_t__ f_fsdata; } ;
struct TYPE_2__ {size_t avail_out; scalar_t__ avail_in; void* next_out; } ;
struct bz_file {int bzf_endseen; TYPE_1__ bzf_bzstream; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bz_file*) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int
FUNC_3(struct open_file *VAR_3, void *VAR_4, size_t VAR_5, size_t *VAR_6)
{
    struct bz_file *VAR_7 = (struct bz_file *)VAR_3->f_fsdata;
    int VAR_8;

    VAR_7->bzf_bzstream.next_out = VAR_4;
    VAR_7->bzf_bzstream.avail_out = VAR_5;

    while (VAR_7->bzf_bzstream.avail_out && VAR_7->bzf_endseen == 0) {
 if ((VAR_7->bzf_bzstream.avail_in == 0) && (FUNC_1(VAR_7) == -1)) {
     FUNC_2("bzf_read: fill error\n");
     return(VAR_2);
 }
 if (VAR_7->bzf_bzstream.avail_in == 0) {
     FUNC_2("bzf_read: unexpected EOF\n");
     if (VAR_7->bzf_bzstream.avail_out == VAR_5)
  return(VAR_2);
     break;
 }

 VAR_8 = FUNC_0(&VAR_7->bzf_bzstream);
 if (VAR_8 == VAR_1) {
     VAR_7->bzf_endseen = 1;
     break;
 }
 if (VAR_8 != VAR_0) {
     FUNC_2("bzf_read: BZ2_bzDecompress returned %d\n", VAR_8);
     return(VAR_2);
 }
    }
    if (VAR_6 != ((void*)0))
 *VAR_6 = VAR_7->bzf_bzstream.avail_out;
    return(0);
}
