
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;

void
FUNC_1 ( void )
 {
 FUNC_0 ("\n\nTime Code Generation - IRIG-B or WWV, v%d.%d, %s dmw", VAR_4, VAR_2, VAR_3);
 FUNC_0 ("\n\nRCS Info:");
 FUNC_0 ( "\n  $Header: /home/dmw/src/IRIG_generation/ntp-4.2.2p3/util/RCS/tg.c,v 1.28 2007/02/12 23:57:45 dmw Exp $");
 FUNC_0 ("\n\nUsage: %s [option]*", VAR_1);
 FUNC_0 ("\n\nOptions: -a device_name                 Output audio device name (default /dev/audio)");
 FUNC_0 ( "\n         -b yymmddhhmm                  Remove leap second at end of minute specified");
 FUNC_0 ( "\n         -c seconds_to_send             Number of seconds to send (default 0 = forever)");
 FUNC_0 ( "\n         -d                             Start with IEEE 1344 DST active");
 FUNC_0 ( "\n         -f format_type                 i = Modulated IRIG-B 1998 (no year coded)");
 FUNC_0 ( "\n                                        2 = Modulated IRIG-B 2002 (year coded)");
 FUNC_0 ( "\n                                        3 = Modulated IRIG-B w/IEEE 1344 (year & control funcs) (default)");
 FUNC_0 ( "\n                                        4 = Unmodulated IRIG-B w/IEEE 1344 (year & control funcs)");
 FUNC_0 ( "\n                                        5 = Inverted unmodulated IRIG-B w/IEEE 1344 (year & control funcs)");
 FUNC_0 ( "\n                                        w = WWV(H)");
 FUNC_0 ( "\n         -g yymmddhhmm                  Switch into/out of DST at beginning of minute specified");
 FUNC_0 ( "\n         -i yymmddhhmm                  Insert leap second at end of minute specified");
 FUNC_0 ( "\n         -j                             Disable time rate correction against system clock (default enabled)");
 FUNC_0 ( "\n         -k nn                          Force rate correction for testing (+1 = add cycle, -1 = remove cycle)");
 FUNC_0 ( "\n         -l time_offset                 Set offset of time sent to UTC as per computer, +/- float hours");
 FUNC_0 ( "\n         -o time_offset                 Set IEEE 1344 time offset, +/-, to 0.5 hour (default 0)");
 FUNC_0 ( "\n         -q quality_code_hex            Set IEEE 1344 quality code (default 0)");
 FUNC_0 ( "\n         -r sample_rate                 Audio sample rate (default 8000)");
 FUNC_0 ( "\n         -s                             Set leap warning bit (WWV[H] only)");
 FUNC_0 ( "\n         -t sync_frequency              WWV(H) on-time pulse tone frequency (default 1200)");
 FUNC_0 ( "\n         -u DUT1_offset                 Set WWV(H) DUT1 offset -7 to +7 (default 0)");

 FUNC_0 ( "\n         -v initial_output_level        Set initial output level (default %d, must be 0 to 255)", VAR_0/8);

 FUNC_0 ( "\n         -x                             Turn off verbose output (default on)");
 FUNC_0 ( "\n         -y yymmddhhmmss                Set initial date and time as specified (default system time)");
 FUNC_0 ("\n\nThis software licenced under the GPL, modifications performed 2006 & 2007 by Dean Weiten");
 FUNC_0 ( "\nContact: Dean Weiten, Norscan Instruments Ltd., Winnipeg, MB, Canada, ph (204)-233-9138, E-mail dmw@norscan.com");
 FUNC_0 ("\n\n");
 }
