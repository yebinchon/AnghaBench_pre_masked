
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {int uio_iovcnt; int uio_td; int uio_rw; int uio_segflg; scalar_t__ uio_resid; int uio_offset; struct iovec* uio_iov; } ;
struct ksyms_softc {int sc_objsz; int sc_obj; } ;
struct iovec {size_t iov_len; void* iov_base; } ;
typedef scalar_t__ ssize_t ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,struct uio*) ;

__attribute__((used)) static int
FUNC_1(struct ksyms_softc *VAR_3, void *VAR_4, off_t VAR_5, size_t VAR_6)
{
 struct iovec VAR_7;
 struct uio VAR_8;

 VAR_7.iov_base = VAR_4;
 VAR_7.iov_len = VAR_6;
 VAR_8.uio_iov = &VAR_7;
 VAR_8.uio_iovcnt = 1;
 VAR_8.uio_offset = VAR_5;
 VAR_8.uio_resid = (ssize_t)VAR_6;
 VAR_8.uio_segflg = VAR_0;
 VAR_8.uio_rw = VAR_1;
 VAR_8.uio_td = VAR_2;

 return (FUNC_0(VAR_3->sc_obj, VAR_3->sc_objsz, &VAR_8));
}
