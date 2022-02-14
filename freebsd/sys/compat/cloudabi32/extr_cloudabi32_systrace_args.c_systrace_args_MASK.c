
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef intptr_t uint64_t ;
struct cloudabi_sys_thread_exit_args {int scope; int lock; } ;
struct cloudabi_sys_sock_shutdown_args {int how; int sock; } ;
struct cloudabi_sys_random_get_args {intptr_t buf_len; int buf; } ;
struct cloudabi_sys_proc_raise_args {int sig; } ;
struct cloudabi_sys_proc_exit_args {int rval; } ;
struct cloudabi_sys_proc_exec_args {intptr_t data_len; intptr_t fds_len; int fds; int data; int fd; } ;
struct cloudabi_sys_mem_unmap_args {intptr_t mapping_len; int mapping; } ;
struct cloudabi_sys_mem_sync_args {intptr_t mapping_len; int flags; int mapping; } ;
struct cloudabi_sys_mem_protect_args {intptr_t mapping_len; int prot; int mapping; } ;
struct cloudabi_sys_mem_map_args {intptr_t len; int off; int fd; int flags; int prot; int addr; } ;
struct cloudabi_sys_mem_advise_args {intptr_t mapping_len; int advice; int mapping; } ;
struct cloudabi_sys_lock_unlock_args {int scope; int lock; } ;
struct cloudabi_sys_file_unlink_args {intptr_t path_len; int flags; int path; int fd; } ;
struct cloudabi_sys_file_symlink_args {intptr_t path1_len; intptr_t path2_len; int path2; int fd; int path1; } ;
struct cloudabi_sys_file_stat_put_args {intptr_t path_len; int flags; int buf; int path; int fd; } ;
struct cloudabi_sys_file_stat_get_args {intptr_t path_len; int buf; int path; int fd; } ;
struct cloudabi_sys_file_stat_fput_args {int flags; int buf; int fd; } ;
struct cloudabi_sys_file_stat_fget_args {int buf; int fd; } ;
struct cloudabi_sys_file_rename_args {intptr_t path1_len; intptr_t path2_len; int path2; int fd2; int path1; int fd1; } ;
struct cloudabi_sys_file_readlink_args {intptr_t path_len; intptr_t buf_len; int buf; int path; int fd; } ;
struct cloudabi_sys_file_readdir_args {intptr_t buf_len; int cookie; int buf; int fd; } ;
struct cloudabi_sys_file_open_args {intptr_t path_len; int fds; int oflags; int path; int dirfd; } ;
struct cloudabi_sys_file_link_args {intptr_t path1_len; intptr_t path2_len; int path2; int fd2; int path1; int fd1; } ;
struct cloudabi_sys_file_create_args {intptr_t path_len; int type; int path; int fd; } ;
struct cloudabi_sys_file_allocate_args {int len; int offset; int fd; } ;
struct cloudabi_sys_file_advise_args {int advice; int len; int offset; int fd; } ;
struct cloudabi_sys_fd_sync_args {int fd; } ;
struct cloudabi_sys_fd_stat_put_args {int flags; int buf; int fd; } ;
struct cloudabi_sys_fd_stat_get_args {int buf; int fd; } ;
struct cloudabi_sys_fd_seek_args {int whence; int offset; int fd; } ;
struct cloudabi_sys_fd_replace_args {int to; int from; } ;
struct cloudabi_sys_fd_dup_args {int from; } ;
struct cloudabi_sys_fd_datasync_args {int fd; } ;
struct cloudabi_sys_fd_create2_args {int type; } ;
struct cloudabi_sys_fd_create1_args {int type; } ;
struct cloudabi_sys_fd_close_args {int fd; } ;
struct cloudabi_sys_condvar_signal_args {int nwaiters; int scope; int condvar; } ;
struct cloudabi_sys_clock_time_get_args {int precision; int clock_id; } ;
struct cloudabi_sys_clock_res_get_args {int clock_id; } ;
struct cloudabi32_sys_thread_create_args {int attr; } ;
struct cloudabi32_sys_sock_send_args {int out; int in; int sock; } ;
struct cloudabi32_sys_sock_recv_args {int out; int in; int sock; } ;
struct cloudabi32_sys_poll_args {intptr_t nsubscriptions; int out; int in; } ;
struct cloudabi32_sys_fd_write_args {intptr_t iovs_len; int iovs; int fd; } ;
struct cloudabi32_sys_fd_read_args {intptr_t iovs_len; int iovs; int fd; } ;
struct cloudabi32_sys_fd_pwrite_args {intptr_t iovs_len; int offset; int iovs; int fd; } ;
struct cloudabi32_sys_fd_pread_args {intptr_t iovs_len; int offset; int iovs; int fd; } ;
typedef int int64_t ;



__attribute__((used)) static void
FUNC_0(int VAR_0, void *VAR_1, uint64_t *VAR_2, int *VAR_3)
{
 int64_t *VAR_4 = (int64_t *) VAR_2;
 switch (VAR_0) {

 case 0: {
  struct cloudabi_sys_clock_res_get_args *VAR_5 = VAR_1;
  VAR_4[0] = VAR_5->clock_id;
  *VAR_3 = 1;
  break;
 }

 case 1: {
  struct cloudabi_sys_clock_time_get_args *VAR_6 = VAR_1;
  VAR_4[0] = VAR_6->clock_id;
  VAR_4[1] = VAR_6->precision;
  *VAR_3 = 2;
  break;
 }

 case 2: {
  struct cloudabi_sys_condvar_signal_args *VAR_7 = VAR_1;
  VAR_2[0] = (intptr_t) VAR_7->condvar;
  VAR_4[1] = VAR_7->scope;
  VAR_4[2] = VAR_7->nwaiters;
  *VAR_3 = 3;
  break;
 }

 case 3: {
  struct cloudabi_sys_fd_close_args *VAR_8 = VAR_1;
  VAR_4[0] = VAR_8->fd;
  *VAR_3 = 1;
  break;
 }

 case 4: {
  struct cloudabi_sys_fd_create1_args *VAR_9 = VAR_1;
  VAR_4[0] = VAR_9->type;
  *VAR_3 = 1;
  break;
 }

 case 5: {
  struct cloudabi_sys_fd_create2_args *VAR_10 = VAR_1;
  VAR_4[0] = VAR_10->type;
  *VAR_3 = 1;
  break;
 }

 case 6: {
  struct cloudabi_sys_fd_datasync_args *VAR_11 = VAR_1;
  VAR_4[0] = VAR_11->fd;
  *VAR_3 = 1;
  break;
 }

 case 7: {
  struct cloudabi_sys_fd_dup_args *VAR_12 = VAR_1;
  VAR_4[0] = VAR_12->from;
  *VAR_3 = 1;
  break;
 }

 case 8: {
  struct cloudabi32_sys_fd_pread_args *VAR_13 = VAR_1;
  VAR_4[0] = VAR_13->fd;
  VAR_2[1] = (intptr_t) VAR_13->iovs;
  VAR_2[2] = VAR_13->iovs_len;
  VAR_4[3] = VAR_13->offset;
  *VAR_3 = 4;
  break;
 }

 case 9: {
  struct cloudabi32_sys_fd_pwrite_args *VAR_14 = VAR_1;
  VAR_4[0] = VAR_14->fd;
  VAR_2[1] = (intptr_t) VAR_14->iovs;
  VAR_2[2] = VAR_14->iovs_len;
  VAR_4[3] = VAR_14->offset;
  *VAR_3 = 4;
  break;
 }

 case 10: {
  struct cloudabi32_sys_fd_read_args *VAR_15 = VAR_1;
  VAR_4[0] = VAR_15->fd;
  VAR_2[1] = (intptr_t) VAR_15->iovs;
  VAR_2[2] = VAR_15->iovs_len;
  *VAR_3 = 3;
  break;
 }

 case 11: {
  struct cloudabi_sys_fd_replace_args *VAR_16 = VAR_1;
  VAR_4[0] = VAR_16->from;
  VAR_4[1] = VAR_16->to;
  *VAR_3 = 2;
  break;
 }

 case 12: {
  struct cloudabi_sys_fd_seek_args *VAR_17 = VAR_1;
  VAR_4[0] = VAR_17->fd;
  VAR_4[1] = VAR_17->offset;
  VAR_4[2] = VAR_17->whence;
  *VAR_3 = 3;
  break;
 }

 case 13: {
  struct cloudabi_sys_fd_stat_get_args *VAR_18 = VAR_1;
  VAR_4[0] = VAR_18->fd;
  VAR_2[1] = (intptr_t) VAR_18->buf;
  *VAR_3 = 2;
  break;
 }

 case 14: {
  struct cloudabi_sys_fd_stat_put_args *VAR_19 = VAR_1;
  VAR_4[0] = VAR_19->fd;
  VAR_2[1] = (intptr_t) VAR_19->buf;
  VAR_4[2] = VAR_19->flags;
  *VAR_3 = 3;
  break;
 }

 case 15: {
  struct cloudabi_sys_fd_sync_args *VAR_20 = VAR_1;
  VAR_4[0] = VAR_20->fd;
  *VAR_3 = 1;
  break;
 }

 case 16: {
  struct cloudabi32_sys_fd_write_args *VAR_21 = VAR_1;
  VAR_4[0] = VAR_21->fd;
  VAR_2[1] = (intptr_t) VAR_21->iovs;
  VAR_2[2] = VAR_21->iovs_len;
  *VAR_3 = 3;
  break;
 }

 case 17: {
  struct cloudabi_sys_file_advise_args *VAR_22 = VAR_1;
  VAR_4[0] = VAR_22->fd;
  VAR_4[1] = VAR_22->offset;
  VAR_4[2] = VAR_22->len;
  VAR_4[3] = VAR_22->advice;
  *VAR_3 = 4;
  break;
 }

 case 18: {
  struct cloudabi_sys_file_allocate_args *VAR_23 = VAR_1;
  VAR_4[0] = VAR_23->fd;
  VAR_4[1] = VAR_23->offset;
  VAR_4[2] = VAR_23->len;
  *VAR_3 = 3;
  break;
 }

 case 19: {
  struct cloudabi_sys_file_create_args *VAR_24 = VAR_1;
  VAR_4[0] = VAR_24->fd;
  VAR_2[1] = (intptr_t) VAR_24->path;
  VAR_2[2] = VAR_24->path_len;
  VAR_4[3] = VAR_24->type;
  *VAR_3 = 4;
  break;
 }

 case 20: {
  struct cloudabi_sys_file_link_args *VAR_25 = VAR_1;
  VAR_4[0] = VAR_25->fd1;
  VAR_2[1] = (intptr_t) VAR_25->path1;
  VAR_2[2] = VAR_25->path1_len;
  VAR_4[3] = VAR_25->fd2;
  VAR_2[4] = (intptr_t) VAR_25->path2;
  VAR_2[5] = VAR_25->path2_len;
  *VAR_3 = 6;
  break;
 }

 case 21: {
  struct cloudabi_sys_file_open_args *VAR_26 = VAR_1;
  VAR_4[0] = VAR_26->dirfd;
  VAR_2[1] = (intptr_t) VAR_26->path;
  VAR_2[2] = VAR_26->path_len;
  VAR_4[3] = VAR_26->oflags;
  VAR_2[4] = (intptr_t) VAR_26->fds;
  *VAR_3 = 5;
  break;
 }

 case 22: {
  struct cloudabi_sys_file_readdir_args *VAR_27 = VAR_1;
  VAR_4[0] = VAR_27->fd;
  VAR_2[1] = (intptr_t) VAR_27->buf;
  VAR_2[2] = VAR_27->buf_len;
  VAR_4[3] = VAR_27->cookie;
  *VAR_3 = 4;
  break;
 }

 case 23: {
  struct cloudabi_sys_file_readlink_args *VAR_28 = VAR_1;
  VAR_4[0] = VAR_28->fd;
  VAR_2[1] = (intptr_t) VAR_28->path;
  VAR_2[2] = VAR_28->path_len;
  VAR_2[3] = (intptr_t) VAR_28->buf;
  VAR_2[4] = VAR_28->buf_len;
  *VAR_3 = 5;
  break;
 }

 case 24: {
  struct cloudabi_sys_file_rename_args *VAR_29 = VAR_1;
  VAR_4[0] = VAR_29->fd1;
  VAR_2[1] = (intptr_t) VAR_29->path1;
  VAR_2[2] = VAR_29->path1_len;
  VAR_4[3] = VAR_29->fd2;
  VAR_2[4] = (intptr_t) VAR_29->path2;
  VAR_2[5] = VAR_29->path2_len;
  *VAR_3 = 6;
  break;
 }

 case 25: {
  struct cloudabi_sys_file_stat_fget_args *VAR_30 = VAR_1;
  VAR_4[0] = VAR_30->fd;
  VAR_2[1] = (intptr_t) VAR_30->buf;
  *VAR_3 = 2;
  break;
 }

 case 26: {
  struct cloudabi_sys_file_stat_fput_args *VAR_31 = VAR_1;
  VAR_4[0] = VAR_31->fd;
  VAR_2[1] = (intptr_t) VAR_31->buf;
  VAR_4[2] = VAR_31->flags;
  *VAR_3 = 3;
  break;
 }

 case 27: {
  struct cloudabi_sys_file_stat_get_args *VAR_32 = VAR_1;
  VAR_4[0] = VAR_32->fd;
  VAR_2[1] = (intptr_t) VAR_32->path;
  VAR_2[2] = VAR_32->path_len;
  VAR_2[3] = (intptr_t) VAR_32->buf;
  *VAR_3 = 4;
  break;
 }

 case 28: {
  struct cloudabi_sys_file_stat_put_args *VAR_33 = VAR_1;
  VAR_4[0] = VAR_33->fd;
  VAR_2[1] = (intptr_t) VAR_33->path;
  VAR_2[2] = VAR_33->path_len;
  VAR_2[3] = (intptr_t) VAR_33->buf;
  VAR_4[4] = VAR_33->flags;
  *VAR_3 = 5;
  break;
 }

 case 29: {
  struct cloudabi_sys_file_symlink_args *VAR_34 = VAR_1;
  VAR_2[0] = (intptr_t) VAR_34->path1;
  VAR_2[1] = VAR_34->path1_len;
  VAR_4[2] = VAR_34->fd;
  VAR_2[3] = (intptr_t) VAR_34->path2;
  VAR_2[4] = VAR_34->path2_len;
  *VAR_3 = 5;
  break;
 }

 case 30: {
  struct cloudabi_sys_file_unlink_args *VAR_35 = VAR_1;
  VAR_4[0] = VAR_35->fd;
  VAR_2[1] = (intptr_t) VAR_35->path;
  VAR_2[2] = VAR_35->path_len;
  VAR_4[3] = VAR_35->flags;
  *VAR_3 = 4;
  break;
 }

 case 31: {
  struct cloudabi_sys_lock_unlock_args *VAR_36 = VAR_1;
  VAR_2[0] = (intptr_t) VAR_36->lock;
  VAR_4[1] = VAR_36->scope;
  *VAR_3 = 2;
  break;
 }

 case 32: {
  struct cloudabi_sys_mem_advise_args *VAR_37 = VAR_1;
  VAR_2[0] = (intptr_t) VAR_37->mapping;
  VAR_2[1] = VAR_37->mapping_len;
  VAR_4[2] = VAR_37->advice;
  *VAR_3 = 3;
  break;
 }

 case 33: {
  struct cloudabi_sys_mem_map_args *VAR_38 = VAR_1;
  VAR_2[0] = (intptr_t) VAR_38->addr;
  VAR_2[1] = VAR_38->len;
  VAR_4[2] = VAR_38->prot;
  VAR_4[3] = VAR_38->flags;
  VAR_4[4] = VAR_38->fd;
  VAR_4[5] = VAR_38->off;
  *VAR_3 = 6;
  break;
 }

 case 34: {
  struct cloudabi_sys_mem_protect_args *VAR_39 = VAR_1;
  VAR_2[0] = (intptr_t) VAR_39->mapping;
  VAR_2[1] = VAR_39->mapping_len;
  VAR_4[2] = VAR_39->prot;
  *VAR_3 = 3;
  break;
 }

 case 35: {
  struct cloudabi_sys_mem_sync_args *VAR_40 = VAR_1;
  VAR_2[0] = (intptr_t) VAR_40->mapping;
  VAR_2[1] = VAR_40->mapping_len;
  VAR_4[2] = VAR_40->flags;
  *VAR_3 = 3;
  break;
 }

 case 36: {
  struct cloudabi_sys_mem_unmap_args *VAR_41 = VAR_1;
  VAR_2[0] = (intptr_t) VAR_41->mapping;
  VAR_2[1] = VAR_41->mapping_len;
  *VAR_3 = 2;
  break;
 }

 case 37: {
  struct cloudabi32_sys_poll_args *VAR_42 = VAR_1;
  VAR_2[0] = (intptr_t) VAR_42->in;
  VAR_2[1] = (intptr_t) VAR_42->out;
  VAR_2[2] = VAR_42->nsubscriptions;
  *VAR_3 = 3;
  break;
 }

 case 38: {
  struct cloudabi_sys_proc_exec_args *VAR_43 = VAR_1;
  VAR_4[0] = VAR_43->fd;
  VAR_2[1] = (intptr_t) VAR_43->data;
  VAR_2[2] = VAR_43->data_len;
  VAR_2[3] = (intptr_t) VAR_43->fds;
  VAR_2[4] = VAR_43->fds_len;
  *VAR_3 = 5;
  break;
 }

 case 39: {
  struct cloudabi_sys_proc_exit_args *VAR_44 = VAR_1;
  VAR_4[0] = VAR_44->rval;
  *VAR_3 = 1;
  break;
 }

 case 40: {
  *VAR_3 = 0;
  break;
 }

 case 41: {
  struct cloudabi_sys_proc_raise_args *VAR_45 = VAR_1;
  VAR_4[0] = VAR_45->sig;
  *VAR_3 = 1;
  break;
 }

 case 42: {
  struct cloudabi_sys_random_get_args *VAR_46 = VAR_1;
  VAR_2[0] = (intptr_t) VAR_46->buf;
  VAR_2[1] = VAR_46->buf_len;
  *VAR_3 = 2;
  break;
 }

 case 43: {
  struct cloudabi32_sys_sock_recv_args *VAR_47 = VAR_1;
  VAR_4[0] = VAR_47->sock;
  VAR_2[1] = (intptr_t) VAR_47->in;
  VAR_2[2] = (intptr_t) VAR_47->out;
  *VAR_3 = 3;
  break;
 }

 case 44: {
  struct cloudabi32_sys_sock_send_args *VAR_48 = VAR_1;
  VAR_4[0] = VAR_48->sock;
  VAR_2[1] = (intptr_t) VAR_48->in;
  VAR_2[2] = (intptr_t) VAR_48->out;
  *VAR_3 = 3;
  break;
 }

 case 45: {
  struct cloudabi_sys_sock_shutdown_args *VAR_49 = VAR_1;
  VAR_4[0] = VAR_49->sock;
  VAR_4[1] = VAR_49->how;
  *VAR_3 = 2;
  break;
 }

 case 46: {
  struct cloudabi32_sys_thread_create_args *VAR_50 = VAR_1;
  VAR_2[0] = (intptr_t) VAR_50->attr;
  *VAR_3 = 1;
  break;
 }

 case 47: {
  struct cloudabi_sys_thread_exit_args *VAR_51 = VAR_1;
  VAR_2[0] = (intptr_t) VAR_51->lock;
  VAR_4[1] = VAR_51->scope;
  *VAR_3 = 2;
  break;
 }

 case 48: {
  *VAR_3 = 0;
  break;
 }
 default:
  *VAR_3 = 0;
  break;
 };
}
