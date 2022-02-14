
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int off_t ;
typedef int mbstate_t ;
typedef int fpos_t ;
struct TYPE_21__ {scalar_t__ _size; } ;
struct TYPE_20__ {scalar_t__ _size; } ;
struct TYPE_19__ {scalar_t__ _size; int * _base; } ;
struct TYPE_22__ {int _flags; int _file; int _flags2; int (* _close ) (TYPE_4__*) ;int _seek; int _write; int _read; struct TYPE_22__* _cookie; int _mbstate; scalar_t__ _orientation; TYPE_3__ _lb; TYPE_2__ _ub; scalar_t__ _lbfsize; TYPE_1__ _bf; int * _p; scalar_t__ _r; scalar_t__ _w; } ;
typedef TYPE_4__ FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 () ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_6 (TYPE_4__*) ;
 int VAR_24 ;
 int FUNC_7 (char const*,int*) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 () ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int,int) ;
 scalar_t__ FUNC_12 (int,int ,...) ;
 int FUNC_13 (char const*,int,int ) ;
 int FUNC_14 (TYPE_4__*,int ,int ) ;
 int VAR_28 ;
 int FUNC_15 (TYPE_4__*) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (int,int ) ;
 int FUNC_18 (int *,int ,int) ;
 int FUNC_19 (TYPE_4__*) ;
 int FUNC_20 (TYPE_4__*) ;
 int FUNC_21 (TYPE_4__*) ;

FILE *
FUNC_22(const char * __restrict VAR_29, const char * __restrict VAR_30,
    FILE * __restrict VAR_31)
{
 int VAR_32;
 int VAR_33, VAR_34, VAR_35, VAR_36, VAR_37, VAR_38;

 if ((VAR_34 = FUNC_7(VAR_30, &VAR_36)) == 0) {
  VAR_37 = VAR_28;
  (void) FUNC_15(VAR_31);
  VAR_28 = VAR_37;
  return (((void*)0));
 }

 FUNC_0(VAR_31);

 if (!VAR_24)
  FUNC_9();






 if (VAR_29 == ((void*)0)) {

  if (VAR_31->_flags == 0) {
   VAR_28 = VAR_2;
   VAR_31 = ((void*)0);
   goto end;
  }
  if ((VAR_33 = FUNC_12(VAR_31->_file, VAR_7)) < 0) {
   VAR_37 = VAR_28;
   FUNC_15(VAR_31);
   VAR_28 = VAR_37;
   VAR_31 = ((void*)0);
   goto end;
  }

  if ((VAR_33 & VAR_10) != VAR_14 &&
      (VAR_33 & (VAR_10 | VAR_13)) != (VAR_36 & VAR_10)) {
   FUNC_15(VAR_31);
   VAR_28 = VAR_1;
   VAR_31 = ((void*)0);
   goto end;
  }
  if (VAR_31->_flags & VAR_23)
   (void) FUNC_8(VAR_31);
  if ((VAR_36 ^ VAR_33) & VAR_11) {
   VAR_33 &= ~VAR_11;
   VAR_33 |= VAR_36 & VAR_11;
   if (FUNC_12(VAR_31->_file, VAR_9, VAR_33) < 0) {
    VAR_37 = VAR_28;
    FUNC_15(VAR_31);
    VAR_28 = VAR_37;
    VAR_31 = ((void*)0);
    goto end;
   }
  }
  if (VAR_36 & VAR_15)
   (void) FUNC_17(VAR_31->_file, (off_t)0);
  if (!(VAR_36 & VAR_11))
   (void) FUNC_14(VAR_31, (fpos_t)0, VAR_17);
  if (VAR_36 & VAR_12)
   (void) FUNC_12(VAR_31->_file, VAR_8, VAR_5);
  VAR_32 = VAR_31->_file;
  VAR_35 = 0;
  VAR_38 = -1;
  goto finish;
 }
 if (VAR_31->_flags == 0) {
  VAR_31->_flags = VAR_21;
  VAR_35 = 0;
  VAR_38 = -1;
 } else {

  if (VAR_31->_flags & VAR_23)
   (void) FUNC_8(VAR_31);

  VAR_35 = VAR_31->_close != ((void*)0);
  if ((VAR_38 = VAR_31->_file) < 0 && VAR_35) {
   (void) (*VAR_31->_close)(VAR_31->_cookie);
   VAR_35 = 0;
  }
 }


 VAR_32 = FUNC_13(VAR_29, VAR_36, VAR_0);

 if (VAR_32 < 0 && VAR_35 && VAR_38 > VAR_19 &&
     (VAR_28 == VAR_4 || VAR_28 == VAR_3)) {
  (void) (*VAR_31->_close)(VAR_31->_cookie);
  VAR_35 = 0;
  VAR_38 = -1;
  VAR_32 = FUNC_13(VAR_29, VAR_36, VAR_0);
 }
 VAR_37 = VAR_28;

finish:
 if (VAR_31->_flags & VAR_22)
  FUNC_16((char *)VAR_31->_bf._base);
 VAR_31->_w = 0;
 VAR_31->_r = 0;
 VAR_31->_p = ((void*)0);
 VAR_31->_bf._base = ((void*)0);
 VAR_31->_bf._size = 0;
 VAR_31->_lbfsize = 0;
 if (FUNC_5(VAR_31))
  FUNC_2(VAR_31);
 VAR_31->_ub._size = 0;
 if (FUNC_4(VAR_31))
  FUNC_1(VAR_31);
 VAR_31->_lb._size = 0;
 VAR_31->_orientation = 0;
 FUNC_18(&VAR_31->_mbstate, 0, sizeof(mbstate_t));
 VAR_31->_flags2 = 0;

 if (VAR_32 < 0) {
  if (VAR_35)
   (void) (*VAR_31->_close)(VAR_31->_cookie);
  VAR_31->_flags = 0;
  VAR_28 = VAR_37;
  VAR_31 = ((void*)0);
  goto end;
 }






 if (VAR_38 >= 0) {
  if ((VAR_36 & VAR_12 ? FUNC_12(VAR_32, VAR_6, VAR_38) :
      FUNC_11(VAR_32, VAR_38)) >= 0) {
   (void)FUNC_10(VAR_32);
   VAR_32 = VAR_38;
  } else
   (void)FUNC_10(VAR_31->_file);
 }
 if (VAR_32 > VAR_18) {
  VAR_31->_flags = 0;
  VAR_28 = VAR_3;
  VAR_31 = ((void*)0);
  goto end;
 }

 VAR_31->_flags = VAR_34;
 VAR_31->_file = VAR_32;
 VAR_31->_cookie = VAR_31;
 VAR_31->_read = VAR_25;
 VAR_31->_write = VAR_27;
 VAR_31->_seek = VAR_26;
 VAR_31->_close = FUNC_6;
 if (VAR_36 & VAR_11) {
  VAR_31->_flags2 |= VAR_20;
  (void) FUNC_14(VAR_31, (fpos_t)0, VAR_16);
 }
end:
 FUNC_3();
 return (VAR_31);
}
